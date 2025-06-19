class Solution {
  public:
    int minJumps(vector<int>& arr) 
    {
        int n = arr.size();
        int steps = arr[0];
        int i=1;
        int jump=1;
        int maxSteps = 0;
        if(arr[0]<=0)
        {
            return -1;
        }
        while(i<n)
        {
            maxSteps = max(maxSteps,i+arr[i]);
            if(steps-i+1>=n-1){
                return jump;
            }
            steps--;
            if(steps==0)
            {
                steps = maxSteps-i;
                maxSteps=0;
                if(steps==0)
                {
                    return -1;
                }
                if(i==n-1)
                {
                    break;
                }
                jump++;
            }
            i++;
        }    
        return jump;
    }
};

