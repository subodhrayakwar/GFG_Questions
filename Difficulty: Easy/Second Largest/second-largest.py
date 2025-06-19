class Solution:
    def getSecondLargest(self, arr):
        arr=sorted(set(arr))
        if len(arr)==1:return -1
        else:return arr[-2]