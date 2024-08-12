#include <stdio.h>
#include <stdlib.h>

int* findPeaks(int* mountain, int mountainSize, int* returnSize) {
    int *array = (int*)malloc(mountainSize * sizeof(int));
    int count = 0;
    for(int i=1; i<mountainSize-1; i++)
    {
        if(mountain[i]>mountain[i-1] && mountain[i]>mountain[i+1])
        array[count++]=i;
    }
    *returnSize = count;
    return array;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    int returnSize;
    int *result = findPeaks(a,n,&returnSize);
    for(int i=0; i<returnSize; i++)
        printf("%d ", result[i]);
    free(result);
}
