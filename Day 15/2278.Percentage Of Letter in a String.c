#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int percentageLetter(char* s, char letter) {
    int count =0;
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]==letter)
        count++;
    }
    return ((count*100)/strlen(s));
}

int main()
{
    char str[100];
    gets(str);
    char ch;
    scanf("%c", &ch);
    printf("%d",percentageLetter(str, ch));
}
