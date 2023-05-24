#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

void selectSort(int arriNumbers[], int iLength)
{
    int iTemp;
    for (int iOuterLoop = 0; iOuterLoop < iLength; iOuterLoop++)
    {
        for (int iInnerLoop = iOuterLoop + 1; iInnerLoop < iLength; iInnerLoop++)
        {
            if (arriNumbers[iOuterLoop] > arriNumbers[iInnerLoop])
            {
                iTemp = arriNumbers[iOuterLoop];
                arriNumbers[iOuterLoop] = arriNumbers[iInnerLoop];
                arriNumbers[iInnerLoop] = iTemp;
            }
        }
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
    selectSort(arriNumbers_1, iArraySize);
    auto timeStop = high_resolution_clock::now();

    cout << "Array original ordenado: ";
    printArray(arriNumbers_1, iArraySize);

    auto timeDuration = duration_cast<nanoseconds>(timeStop - timeStart);
    cout << "Tempo utilizado: " << timeDuration.count() << " nanosegundos" << endl;
    cout << "====================" << endl;

    return 0;
}