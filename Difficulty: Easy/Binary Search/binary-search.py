class Solution:
    def binarysearch(self, arr, k):
        lo = 0
        hi = len(arr) - 1
        result = -1
        while lo <= hi:
            mid = lo + (hi-lo) // 2
            if arr[mid] == k:
                result = mid
                hi = mid - 1
            elif arr[mid] > k:
                hi = mid - 1
            elif arr[mid] < k:
                lo = mid + 1
        
        return result