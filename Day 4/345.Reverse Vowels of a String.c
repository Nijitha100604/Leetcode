char* reverseVowels(char* s) {
    int len = strlen(s);
    char arr[len];
    int count = 0;
    for(int i=0; i<len ; i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            arr[count++]=s[i];
    }
    count = count -1;
    for(int i=0; i<len ; i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            s[i]=arr[count--];
    }
    return s;
}
