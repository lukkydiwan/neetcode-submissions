class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long m=1,f=0;
        for(auto x: nums){
            if(x==0){
                f++;
            }else{
            m*=x;
            }
        }
        vector<int> ans;
        for(auto x:nums){
            if(f>1){
                ans.push_back(0);
            }else if(f==1){
                if(x==0){
                    ans.push_back(m);
                }else{
                    ans.push_back(0);
                }
            }else{
                ans.push_back(m/x);

            }
        }
        return ans;
    }
};
