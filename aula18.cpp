#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

void insertionSort(int arriNumbers[], int iLength)
{
    for (int iOuterLoop = 1; iOuterLoop < iLength; iOuterLoop++)
    {
        int iTemp = arriNumbers[iOuterLoop];
        int iInenerLoop = iOuterLoop - 1;

        while (iTemp < arriNumbers[iInenerLoop] && iInenerLoop>=0)
        {
            arriNumbers[iInenerLoop+1] = arriNumbers[iInenerLoop];
            iInenerLoop--;
        }

        arriNumbers[iInenerLoop+1] = iTemp;
    }
}
 
void printArray(int arriNumbers[], int iLength)
{
    for(int i = 0; i < iLength; i++) cout << arriNumbers[i] << " ";
    cout << endl;
}

int main()
{
    int arriNumbers_1[] = {42, 7, 0, 666, 13};
    int iArraySize = sizeof(arriNumbers_1)/sizeof(arriNumbers_1[0]);

    cout << "Array original: ";
    printArray(arriNumbers_1, iArraySize);

    auto timeStart = high_resolution_clock::now();
    insertionSort(arriNumbers_1, iArraySize);
    auto timeStop = high_resolution_clock::now();

    cout << "Array original ordenado: ";
    printArray(arriNumbers_1, iArraySize);

    auto timeDuration = duration_cast<nanoseconds>(timeStop - timeStart);
    cout << "Tempo utilizado: " << timeDuration.count() << " nanosegundos" << endl;
    cout << "====================" << endl;

    return 0;
}