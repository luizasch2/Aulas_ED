#include <iostream>
#include <math.h>

//Implementação do shell sort com vetores -> aula dada para casa

using namespace std;


void printArray(int arriNumbers[], int iLength)
{
    for(int iOuterLoop = 0; iOuterLoop < iLength; iOuterLoop++) cout << arriNumbers[iOuterLoop] << " ";
    cout << endl;
}

void shellSort(int arr[], int iTam)
{
    for (int h = ceil(iTam/2); h > 0; h = ceil(h/2))
    {
        for (int iOuterLoop = h; iOuterLoop < iTam; iOuterLoop++)
        {
            int iTemp = arr[iOuterLoop];
            int iInnerLoop;

            for (iInnerLoop = iOuterLoop; iInnerLoop >= h; iInnerLoop -= h)
            {
                if (arr[iInnerLoop-h] > iTemp)
                {
                    arr[iInnerLoop] = arr[iInnerLoop-h];
                }
                    
                else break;
            }

            arr[iInnerLoop] = iTemp;
        }
    }
}


int main()
{
    int arriNumbers_1[] = {999, 99, 42, 7, 0, 666, 13};
    int iArraySize = sizeof(arriNumbers_1)/sizeof(arriNumbers_1[0]);

    cout << "Array original: ";
    printArray(arriNumbers_1, iArraySize);

    cout << "Array original ordenado: ";

    shellSort(arriNumbers_1, iArraySize);
    printArray(arriNumbers_1, iArraySize);

}

