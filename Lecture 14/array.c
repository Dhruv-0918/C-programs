#include <stdio.h>
int main(){
    int arr[7]={1,2,3,4,3,2,1};
    int isTrue=1;
        for(int i=0;i<7/2;i++){
            if(arr[i]!=arr[7-i-1]){
            isTrue=0;
            }
        }
            if(isTrue==1){
                printf("palindrome");

            }
            else {
                printf("not palindrome");
            }
        }

