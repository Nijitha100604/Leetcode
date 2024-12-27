#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int findPermutationDifference(char* s, char* t) {
    int sum=0;
    for(int i=0; i<strlen(s); i++)
    {
        for(int j=0; j<strlen(t); j++)
        {
            if(s[i]==t[j])
            {
                int d=i-j;
                if(d<0) d=-1*d;
                sum+=d;
            }
        }
    }
    return sum;
}

int main()
{
    char s[100];
    gets(s);
    char t[100];
    gets(t);
    printf("%d",findPermutationDifference(s,t));

}
