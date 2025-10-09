#include<stdio.h>
#include<string.h>
int main(){
char str[]="ababde";
// print first non repeating value in string
int ln = strlen(str);
int freq[256]={0};
for(int i=0;i<ln;i++){
    freq[str[i]]++;
}
for(int i=0;i<ln;i++)
{
    if(freq[str[i]]==1){
        printf("%c",str[i]);
        break;
    }
}    return 0;
}