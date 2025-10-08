#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "dhruv";
    int vCount = 0;
    int cCount = 0;
    int ln = strlen(str);
    for (int i = 0; i < ln; i++)
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'o' || ch == 'i' || ch == 'e' || ch == 'u')
        {
            vCount++;
        }
        else
        {
            cCount++;
        }
    }
    printf("Vowels=\t%d\n", vCount);
    printf("Consonant=\t%d\n", cCount);
}