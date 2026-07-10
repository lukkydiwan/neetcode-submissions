class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0,n=s.size();
        vector<int> seen(128);
        int l=0,r=0;
        while(r<n){
            while(seen[s[r]]!=0){
                seen[s[l]]--;
                l++;
            }
            seen[s[r]]++;
            
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};
