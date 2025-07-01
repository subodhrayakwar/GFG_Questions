class Solution {
  public:
    int substrCount(string &s, int k) {
        // code here
        if(k>s.size()) return 0;
        unordered_map<char,int> ump;
        int ans=0;
        for(int i=0; i<k; i++) ump[s[i]]++;
        if(ump.size()==k-1) ans++;
        for(int i=k; i<s.size(); i++){
            int left=i-k;
            int right=i;
            ump[s[left]]--;
            if(ump[s[left]]==0) ump.erase(s[left]);
            ump[s[right]]++;
            if(ump.size()==k-1) ans++;
        }
        return ans;
    }
}; 