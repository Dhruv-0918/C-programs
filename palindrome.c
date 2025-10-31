#include <stdio.h>

int palindrome(int arr[],int start,int end  ){
    if(start>=end){
        return 1;
    }
    if(arr[start]==arr[end]){
        return palindrome(arr,start+1,end-1);
    }
    else return 0;
    
 }
int main()
{
    int i=0;
    int j=2;
   int arr[3]={1,2,1};
   if(palindrome(arr,i,j)){
    printf("Palindrome");
   }
   else{
    printf("not palindrome");
   }
   return 0;
}
   
   