class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        
        
        int n=arr.size();
        
        int i=0;
        
        int sum=0;
        int j=0;
        
        while(j<n){
           
           
           sum+=arr[j];
           
             
                      
                      if(sum==target){
               
               return {i+1,j+1};
           }
           
         
                while(i<j && sum>target){
                    
                     
                    sum=sum-arr[i];
          
            i++;
                      
                      if(sum==target){
               
               return {i+1,j+1};
           }
           
                   
                }
                
            
         
               j++; 
              
            }
        
    return {-1};
        
    }
};