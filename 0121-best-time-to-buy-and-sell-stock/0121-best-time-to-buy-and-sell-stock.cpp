class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxi=0, mini=INT_MAX;
        for(int i=0;i<n;i++){
            if(prices[i]<mini){
                mini=prices[i];
            }
            int profit=prices[i]-mini;
            maxi=max(maxi,profit);
        }
        return maxi;
    }
};