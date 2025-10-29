#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    printf("Enter elements of array : ");
    scanf("%d",&n);
    int *arr = (int *)malloc(n*sizeof(int));

    printf("enter %d elements of array :\n",n);
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);

    

    }

    int j=0;
    for(int i=0;i<=n;i++){
        if(arr[i]==0){
            arr[j]=arr[i];
            j++;
        }
    }
     for(int i=0;i<=n;i++){
        if(arr[i]<0){
            arr[j]=arr[i];
            j++;
        }
    }
     for(int i=0;i<=n;i++){
        if(arr[i]>0){
            arr[j]=arr[i];
            j++;
        }
    }
     printf(arr[n]);
     return 0;

}