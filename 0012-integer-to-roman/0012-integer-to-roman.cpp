class Solution {
public:
    string intToRoman(int num) {
        
        vector<pair<int,string>> ans = {
            {1000,"M"}, {900,"CM"}, {500,"D"}, {400,"CD"},
            {100,"C"}, {90,"XC"}, {50,"L"}, {40,"XL"},
            {10,"X"}, {9,"IX"}, {5,"V"}, {4,"IV"}, {1,"I"}
        };
        string s="";
        for(auto x:ans){
            while(num >= x.first){
                s += x.second;
                num -= x.first;
            }
        }
        return s;
    }
};