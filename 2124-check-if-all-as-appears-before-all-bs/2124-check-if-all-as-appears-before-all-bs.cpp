class Solution {
public:
    bool checkString(string s) {
        string newS = s;
        sort(newS.begin(), newS.end());
        return(s == newS);
    }
};