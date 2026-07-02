class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int jumps=0;
        int currEnd=0, farthest=0;
        for(int i=0;i<n;i++){
            farthest=max(farthest,i+nums[i]);

            if(currEnd==n-1) break;
            if(i==currEnd){
                jumps++;
                currEnd=farthest;
            }
            
        }
        return jumps;
    }
};