class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> maxi(prices.size());
        maxi[prices.size()-1]=prices.back();
        for(int i=prices.size()-2; i>=0; i--){
            maxi[i]=max(maxi[i+1],prices[i]);
        }
        int ans=0;
        for(int i=0; i<maxi.size()-1; i++){
            ans=max(ans,maxi[i+1]-prices[i]);
        }
        return ans;
    }
};
