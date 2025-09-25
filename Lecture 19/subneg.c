#include<stdio.h>
int main(){
    //print sub negative ar
    int arr[]={1,-2,3,-5,3,-6,7,-5};
    int k=3;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<=n;i++){
        int found=0;
        for(int j=i;j<i+k;j++){
            if(arr[j]<0){
                printf("%d,",arr[j]);
                found=1;
                break;
            }
        }
        if(!found){
            printf("0,");
        }
    }
    return 0;
}