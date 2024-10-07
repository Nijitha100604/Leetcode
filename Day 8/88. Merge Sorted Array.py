class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: None Do not return anything, modify nums1 in-place instead.
        """
        n = n-1
        while(n>=0):
            nums1[m] = nums2[n]
            m=m+1
            n = n-1
        nums1.sort()
