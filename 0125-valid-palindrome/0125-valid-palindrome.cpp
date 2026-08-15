class Solution {
public:
    bool isPalindrome(string s) {
        for (char& ch : s) {
            ch = tolower(ch);
        }
        vector<char> arr;
        for (auto x : s) {
            if (isalnum(x)) {
                arr.push_back(x);
            }
        }
        int n = arr.size();
        int i = 0, j = n - 1;
        while (i < j) {
            if (arr[i] != arr[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};