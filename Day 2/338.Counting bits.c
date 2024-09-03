int* countBits(int n, int* returnSize) {
    *returnSize = n+1;
    int* array = (int*)malloc(sizeof(int)*(n+1));
    for(int i=0; i<=n; i++)
    {
        if(i==0)
            array[i]=0;
        else
        {
            int copy = i;
            int count = 0;
            while(copy!=0)
            {
                if(copy%2==1)
                    count++;
                copy /= 2;
            }
            array[i]=count;
        }
    }
    return array;

}
