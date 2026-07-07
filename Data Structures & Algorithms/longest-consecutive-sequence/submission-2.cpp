class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        int ans=0,c=1;
        int n=nums.size();
        for(int i=1; i<n; i++){
            if( nums[i]-nums[i-1]==1)c++;
            else if(nums[i]==nums[i-1])continue;
            else{
                ans=max(c,ans);
                c=1;
            }
        }
        return max(ans,c);
    }
};
