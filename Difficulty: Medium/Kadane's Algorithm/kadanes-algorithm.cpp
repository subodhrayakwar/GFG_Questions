class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int n=arr.size();
        long long maxi=INT_MIN;
        long long  sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        
        if(sum>maxi)
            maxi=sum;
        
        if(sum<0)
            sum=0;
            
        }
        return maxi;
        // Your code here
        
    }
};