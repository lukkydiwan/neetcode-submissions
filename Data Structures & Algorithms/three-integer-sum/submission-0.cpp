class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        vector<vector<int>> ans;
        int n=nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                        vector<int> a={nums[i],nums[j],nums[k]};
                        sort(a.begin(),a.end());
                        s.insert(a);
                    }
                }
            }
        }
        for(auto x:s){
            ans.push_back(x);
        }
        return ans;
    }
};
