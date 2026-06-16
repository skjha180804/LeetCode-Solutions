class Solution {
public:
    void reverseString(vector<char>& s) {
        // reverse(s.begin(),s.end());
        int n=s.size();
        int low=0,high=n-1;
        while(low<high){
            swap(s[low],s[high]);
            low++;
            high--;
        }
    }
};