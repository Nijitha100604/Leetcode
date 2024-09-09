void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}


char* reverseOnlyLetters(char* s) {
    int len = strlen(s);
    int l = 0;
    int r = len-1;
    while(l<r)
    {
        if(isalpha(s[l]))
        {
            while(!isalpha(s[r]) && l<r)
                r--;
            if(isalpha(s[r]) && l<r){
                swap(&s[l], &s[r]);
                r--;
            }
            l++;
        }
        else
            l++;
    }
    return s;
}
