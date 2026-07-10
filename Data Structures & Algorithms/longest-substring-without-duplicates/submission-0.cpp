class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0,n=s.size();
        for(int i=0; i<n; i++){
            vector<int> seen(128);
            for(int j=i; j<n; j++){
                if(seen[s[j]]!=0){
                    break;
                }else{
                    ans=max(ans,j-i+1);
                    seen[s[j]]++;
                }
            }
        }
        return ans;
    }
};
