#include <stdio.h>
#include <stdlib.h>

int* findIntersectionValues(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *array = (int*)malloc(2*sizeof(int));
    *returnSize = 2;
    int count = 0;
    for(int i=0; i<nums1Size; i++)
    {
        for(int j=0; j<nums2Size; j++)
        {
            if(nums1[i]==nums2[j]){
            count++;
            break;
            }
        }
    }
    array[0]=count;
    count = 0;
     for(int i=0; i<nums2Size; i++)
    {
        for(int j=0; j<nums1Size; j++)
        {
            if(nums2[i]==nums1[j]){
            count++;
            break;
            }
        }
    }
    array[1]=count;
    return array;
}

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int a[n1], b[n2];
    for(int i=0; i<n1; i++)
        scanf("%d", &a[i]);
    for(int i=0; i<n2; i++)
        scanf("%d", &b[i]);
    int returnSize;
    int *result = findIntersectionValues(a,n1,b,n2,&returnSize);

    for(int i=0; i<returnSize; i++)
        printf("%d ",result[i]);
    free(result);
}
