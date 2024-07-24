#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isSubsequence(char* s, char* t) {
    int i,j, k=0;
    for(i=0; i<strlen(s); i++)
    {
        for(j=k; j<strlen(t); j++)
        {
            if(s[i]==t[j]){
            k=j+1;
            break;
            }
        }
        if(j==strlen(t))
        break;
    }
    if(j==strlen(t))
    return 0;
    else
    return 1;
}

int main()
{
    char s[100];
    gets(s);
    char t[100];
    gets(t);
    if(isSubsequence(s,t))
        printf("True");
    else
        printf("False");
}
