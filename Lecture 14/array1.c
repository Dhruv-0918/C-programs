#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[6] = {1, 5, -4, 6, 5, -2};
    int maxSum = INT_MIN;

    for (int i = 0; i < 6; i++)
    {
        int currSum = 0;
        for (int j = i; j < 6; j++) {
            currSum = currSum + arr[j];
            if (currSum > maxSum)
            {
                maxSum = currSum;
            }
        }
    }
    printf("%d", maxSum);
}
