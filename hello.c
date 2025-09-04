#include <stdio.h>
int main(){
    int isprime=1;
    int a;
    printf("Enter a value ");
    scanf("%d",&a);
    if(n<=1){
        printf("It is not prime");
        return 0;

    }
    for(int i=2;i<=n;i++){
        if (n%i==0)
        {
            isprime=0;
            break;
        }
        
    }
    if(isprime){
        printf("It id prime");

    }
    else{
        printf("Not a prime number");
    }
    return 0;

}