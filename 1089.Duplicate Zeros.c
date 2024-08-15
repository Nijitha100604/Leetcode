void duplicateZeros(int* arr, int arrSize) {
    for(int i=0; i<arrSize; i++)
    {
        if(arr[i]==0)
        {
            for(int j= arrSize-1; j>i; j--)
            {
                if(j==i+1)
                arr[j]=0;
                else
                arr[j]=arr[j-1];
            }
            i++;
        }
    }
}
