class Solution {
    void reverse(string &s, int l, int r){
        while(l < r){
            swap(s[l],s[r]);
            l++;
            r--;
        }
    }
public:
    string reverseWords(string s) {
        int n=s.size();
        int start=0;
        for(int end=0;end<n;end++){
            if(s[end]==' '){
                reverse(s,start,end-1);
                start=end+1;
            }
            else if(end==n-1){
                reverse(s,start,end);
            }
        }
        return s;
    }
};