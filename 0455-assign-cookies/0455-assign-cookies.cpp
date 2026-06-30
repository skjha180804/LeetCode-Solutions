class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n=g.size(), m=s.size();
        int cnt=0;
        int i=0, j=0;
        while(i<n && j<m){
            if(s[j]>=g[i]){
                cnt += 1;
                i++; j++;
            }
            else j++;
        }
        return cnt;
    }
};