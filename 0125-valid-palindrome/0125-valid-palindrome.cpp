#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check_pal(int i, string &s){
        if(i >= s.length()/2) return true;
        if(s[i] != s[s.length()-i-1]) return false;
        return check_pal(i+1, s);
    }
    bool isPalindrome(string s) {
         string clean = "";

        for(char c : s)
        {
            if(isalnum(c))
            {
                clean += tolower(c);
            }
        }
        return check_pal(0, clean);
    }
};