class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n - k + 1; i++) {
            set<int> st;
            for (int j = i; j < i + k; j++) {
                st.insert(nums[j]);
            }

            for (auto x : st) {
                mp[x]++;
            }
        }

        int ans = -1;
        for (auto x : mp) {
            if (x.second == 1) {
                ans = max(ans, x.first);
            }
        }
        return ans;
    }
};