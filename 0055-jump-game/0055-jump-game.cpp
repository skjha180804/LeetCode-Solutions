class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==1 && nums[0]==0) return true;
        int maxIndex=0;
        for(int i=0;i<n;i++){
            if(i>maxIndex) return false;
            maxIndex = max(maxIndex, i+nums[i]);
           
        }
        return true;
    }
};