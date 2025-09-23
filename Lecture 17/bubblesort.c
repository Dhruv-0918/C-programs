#include <stdio.h>
void BubbleSort(int arr[5])
{
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j=0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int main(void){
        int arr[5] = {5, 3, 6, 9, 2};
        BubbleSort();
    }
