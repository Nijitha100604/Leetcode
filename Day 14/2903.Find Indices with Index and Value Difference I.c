#include <stdio.h>
#include <stdlib.h>

int* findIndices(int* nums, int numsSize, int indexDifference, int valueDifference, int* returnSize) {
    int *array = (int*)malloc(2*sizeof(int));
    *returnSize = 2;
    array[0]=-1;
    array[1]=-1;
    for(int i=0; i<numsSize; i++)
    {
        for(int j=i; j<numsSize; j++)
        {
            if(abs(i-j)>=indexDifference && abs(nums[i]-nums[j])>=valueDifference){
                array[0]=i;
                array[1]=j;
            }
        }
    }
    return array;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);


    int returnSize, v, i;
    scanf("%d", &v);
    scanf("%d", &i);


    int *result = findIndices(a,n,i,v,&returnSize);
    for(int i=0; i<returnSize; i++)
        printf("%d ", result[i]);
}
