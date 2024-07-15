#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int scoreOfString(char* s) {
    int d=0;
    for(int i=0;i<strlen(s)-1; i++)
    {
        int a= (int)s[i], b=(int)s[i+1];
        if((a-b)<0)
        d = d+ (-1*(a-b));
        else
        d+=(a-b);
    }
    return d;


}

int main()
{
    char str[50];
    gets(str);
    printf("%d", scoreOfString(str));

}
