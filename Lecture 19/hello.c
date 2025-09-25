#include <stdio.h>
int main(){
    //print max sum for subarray
    int arr[5]={1,2,3,4,5};
    int k;
    printf("enter value of k");
    scanf("%d",&k);
    int windowsum=0;
    int maxsum;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<k;i++){
        windowsum=windowsum+arr[i];
    }
     maxsum=windowsum;
    for(int j=k;j<n;j++){
        windowsum=windowsum+arr[j]-arr[j-k];
        if(windowsum>maxsum){
           maxsum=windowsum;
        }
    }
    printf("%d",maxsum);
}