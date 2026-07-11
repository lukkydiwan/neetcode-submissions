class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0;
        int l=0,r=0,maxFreq=1;
        unordered_map<char,int> m;
        while(r<s.size()){
            m[s[r]]++;
            maxFreq=max(maxFreq,m[s[r]]);
            if(r-l+1-maxFreq>k){
                m[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
            r++;

        }
        return ans;
    }
};
