int furthestDistanceFromOrigin(char * moves){
    int l=0,r=0,g=0;
    for(int i=0;i<strlen(moves);i++)
    {
        if(moves[i]=='R')
            r++;
        else if(moves[i]=='L')
            l++;
        else
            g++;
    }
    if(l>=r)
         return l+g-r;
    return r-l+g;
}
