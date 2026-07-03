class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(), [](auto &a, auto &b){
            return a[1] < b[1];
        });
        int n=intervals.size();
        int lastItem=intervals[0][1];
        int ans=0;
        for(int i=1;i<n;i++){
            if(intervals[i][0]>=lastItem){
                ans++;
                lastItem=intervals[i][1];
            }
        }
        return n-ans-1;
    }
};