#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int firstUniqChar(char* s) {
    int i, j, index;
    for(i=0; i<strlen(s); i++)
    {
        for(j=0; j<strlen(s); j++)
        {
            if(i!=j){
                if(s[i]==s[j])
                break;
            }
        }
        if(j==strlen(s))
        {
            index=i;
            break;
        }
    }
    if(i==strlen(s))
    return -1;
    else
    return index;
}

int main()
{
    char str[100];
    gets(str);
    printf("%d",firstUniqChar(str));
}
