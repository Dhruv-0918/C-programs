#include<stdio.h>
#include <stdlib.h>
int main(){

// Dynamic Memory allocation!!

    int n;
    printf("Enter elements of array : ");
    scanf("%d",&n);
    int *arr = (int *)calloc(n,sizeof(int));

    printf("enter %d elements of array :\n",n);
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    return 0;
}