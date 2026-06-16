class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.size();
        int st=0;
        int end=min((st+k-1),n-1);
        while(st < n){
            int left=st, right=end;
            while(left<right){
                swap(s[left],s[right]);
                left++;
                right--;
            }
            st=st+2*k;
            end=min((st+k-1),n-1);
        }
        return s;
    }
};