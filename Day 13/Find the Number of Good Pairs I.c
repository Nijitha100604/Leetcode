#include <stdio.h>

int numberOfPairs(int* nums1, int nums1Size, int* nums2, int nums2Size, int k) {
    int count = 0;
    for(int i=0; i<nums1Size; i++)
    {
        for(int j=0; j<nums2Size; j++)
        {
            int a=nums1[i], b=nums2[j]*k;
            if(a%b==0)
            count++;
        }
    }
    return count;
}

int main()
{
    int n1, n2,k;
    scanf("%d", &n1);
    int a[n1];
    for(int i=0; i<n1; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n2);
    int b[n2];
    for(int i=0; i<n2; i++)
        scanf("%d", &b[i]);
    scanf("%d", &k);
    printf("%d", numberOfPairs(a,n1,b,n2,k));
}
