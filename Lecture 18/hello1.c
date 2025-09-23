#include <stdio.h>
  int swap(int*x,int *y){
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    printf("%d %d",*x,*y);
  }
  int main(){
    // swap using Pointer 2.
    int x=10;
    int y=20;
    swap(&x,&y);

  }