class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        int n = arr.size();
        
        int i = 0, id = 0, cnt = 0;
        
        while(i < n){
            if(arr[i] == 'T') i++;
            else {
                int st = max(id, i - k);
                int end = min(n, i+k);
                while(st < end && arr[st] != 'T') st++;
                
                id = st;
                if(id >= n) break;
                if(arr[id] == 'T') cnt++;
                
                id++, i++;
            }
        }
        
        return cnt;
    }
};