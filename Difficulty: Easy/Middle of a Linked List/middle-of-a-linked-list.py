# your task is to complete this function

'''
class node:
    def __init__(data):
        self.data = data
        self.next = None
'''
class Solution:
    def getMiddle(self, head):
        c=0
        d=0
        tmp=head
        while(head):
            c+=1
            head=head.next
        while(tmp):
            d+=1
            if c//2==d:
                    return tmp.next.data
            tmp=tmp.next