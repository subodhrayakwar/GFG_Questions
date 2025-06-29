// User function Template for Java

class Solution {
    // Function to rotate an array by d elements in counter-clockwise direction.
    static void rotateArr(int[]arr, int d) {
        int n=arr.length;
        d=d%n;
        if(n==1){
          return;
        }
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
    }
    static void reverse(int[]arr,int start,int end){
        while(start<end){
          int temp=arr[start];
         arr[start]=arr[end];
         arr[end]=temp;
         start++;
         end--;
        }
        
    }
}

