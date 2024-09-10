int numberOfMatches(int n){
    int add = 0;
    while(n!=0)
    {
        if(n==1)
        {
            n = 0;
        }
        else if(n%2==0)
        {
            add += n/2;
            n = n/2;
        }
        else
        {
            add += (n-1)/2;
            n = ((n-1)/2)+1;
        }
    }
    return add;
}
