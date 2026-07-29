class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        long long maxi=LLONG_MIN;
        long long sum = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];

            if(sum > maxi){
                maxi=sum;
            }

            if(sum < 0){
                sum = 0;
            }
        }
        return maxi;
    }
};