#include <stdio.h>
int swap(int *x, int*y){
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("%d %d",*x,*y);
   }
   /* Swap using Pointers*/
int main(){
   
    int x=10;
    int y=20;
    swap(&x,&y);

    
}