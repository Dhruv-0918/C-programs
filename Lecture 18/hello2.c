#include <stdio.h>
int main(){
    int arr[4]={1,2,3,4};
    int *p=arr;
    for(int i=0;i<4;i++){
        printf("%d",*(p+i));
    }
    for(int k=4;k>=0;k--){
        printf("%d",*(p+k));
    }
}