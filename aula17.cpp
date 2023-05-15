#include <iostream>
#include <chrono>

//bubble sort

using namespace std;
using namespace std::chrono;

void printArray(int [], int);
void bubbleSort(int [], int);
void swapValue(int&, int&);
void optimizedBubble(int [], int);

int main()
{
    int arriNumbers[] = {42,7,0,666,13,1000,999,800,12};
    
    int iArraySize = sizeof(arriNumbers)/sizeof(arriNumbers[0]);


    cout << "Array original: " << endl;
    printArray(arriNumbers, iArraySize);
    cout << "=================================" << endl;

    cout << "Array original ordenado: " << endl;

    auto timeStart = high_resolution_clock::now();
    bubbleSort(arriNumbers, iArraySize);
    auto timeStop = high_resolution_clock::now();

    printArray(arriNumbers,iArraySize);

    auto timeDuration = duration_cast<nanoseconds>(timeStop - timeStart);
    cout << "Tempo utilizado: " << timeDuration.count() << " nanosegundos" << endl;
    
    cout << "=================================" << endl;

    cout << "Segunda versão do bubble sort: " << endl;

    int arriNumbers_2[] = {3,2,5,778,98,6};
    int iArraySize_2 = sizeof(arriNumbers_2)/sizeof(arriNumbers_2[0]);

    cout << "Array embaralhado outra vez: " << endl;
    
    printArray(arriNumbers_2, iArraySize_2);

    cout << "=================================" << endl;

    auto timeStart_2 = high_resolution_clock::now();
    optimizedBubble(arriNumbers_2, iArraySize_2);
    auto timeStop_2 = high_resolution_clock::now();

    printArray(arriNumbers_2,iArraySize_2);

    auto timeDuration_2 = duration_cast<nanoseconds>(timeStop_2 - timeStart_2);
    cout << "Tempo utilizado: " << timeDuration_2.count() << " nanosegundos" << endl;


    return 0;
}

void printArray(int arr[], int iTam)
{
    for (int i=0; i<iTam; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void swapValue(int& iValue1, int& iValue2)
{
    int iTemp = iValue1;
    iValue1 = iValue2;
    iValue2 = iTemp;
}

void bubbleSort(int arr[], int iTam)
{
    for (int iOuterLoop = 0; iOuterLoop < iTam - 1; iOuterLoop++)
    {
        for (int iInnerLoop = 0; iInnerLoop < iTam -1; iInnerLoop++)
        {
            if (arr[iInnerLoop] > arr[iInnerLoop+1])
            {
                swapValue(arr[iInnerLoop], arr[iInnerLoop+1]);
            }
        }
    }
}

void optimizedBubble(int arr[], int iTam)
{
    bool bUnordered = false;

    for (int iOuterLoop = 0; iOuterLoop < iTam - 1; iOuterLoop++)
    {
        bUnordered = false;
        for (int iInnerLoop = 0; iInnerLoop < iTam - 1 - iOuterLoop; iInnerLoop++)
        {
            if (arr[iInnerLoop] > arr[iInnerLoop+1])
            {
                swapValue(arr[iInnerLoop], arr[iInnerLoop+1]);
                bUnordered = true;
            }
        }

        if (bUnordered == false) break;
    } 
}

