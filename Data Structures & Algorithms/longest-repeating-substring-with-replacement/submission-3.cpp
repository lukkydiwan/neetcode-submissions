class Solution {
public:
    int characterReplacement(string s, int k) {
        int c=k,ans=0;
        for(int i=0; i<s.size(); i++){
            unordered_map<char,int> m;
            int c=k,maxFreq=1;
            for(int j=i; j<s.size(); j++){
                m[s[j]]++;
                maxFreq=max(maxFreq,m[s[j]]);
                if(j-i+1-maxFreq>k){
                    break;
                }
                ans=max(ans,j-i+1);
            }
        }
        return ans;
    }
};
