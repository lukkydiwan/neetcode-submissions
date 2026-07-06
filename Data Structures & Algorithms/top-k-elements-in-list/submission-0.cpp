class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>> a;
        vector<int> ans;
        for(auto x:m){
            a.push_back({x.second,x.first});
        }
        sort(a.rbegin(),a.rend());
        for(int i=0; i<k; i++){
            ans.push_back(a[i].second);
        }
        return ans;
    }
};
