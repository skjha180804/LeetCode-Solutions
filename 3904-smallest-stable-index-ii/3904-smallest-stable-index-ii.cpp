class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> arr(n);
        arr[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            arr[i] = min(nums[i], arr[i+1]);
        }

        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);
            if ((maxi - arr[i]) <= k) {
                return i;
            }
        }

        return -1;
    }
};