class Solution {
  public:
    vector<int> findTwoElement(vector<int>& nums) {
        // code here
        int n = nums.size();
        long long linSum = 0, sqSum = 0;
        for(int it: nums) linSum += it, sqSum += (long long)it*it;
            
        //missDiff = m-r    sqDiff = m^2 - r^2
        long long missDiff= (long long)n*(n+1)/2 - linSum,
        sqDiff = (long long)n*(n+1)*(2*n+1)/6 - sqSum;

        //missSum = m+r
        long long missSum = sqDiff/missDiff;
        return {(int)((missSum - missDiff)/2), (int)((missSum + missDiff)/2)};
    }
};