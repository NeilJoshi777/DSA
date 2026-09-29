class Solution {
public:
    string longestPalindrome(string s) {
        string res = "";
        int resLen = 0;

        for(int i=0; i<s.length(); i++){
            int l1 = i;
            int r1 = i;

            while(l1 >= 0 && r1 < s.length() && s[l1] == s[r1]){
                if(r1-l1+1 > resLen){
                    res = s.substr(l1, r1 - l1 + 1);
                    resLen = r1-l1+1;
                }
                l1--;
                r1++;
            }

            int l2 = i;
            int r2 = i + 1;

            while(l2 >= 0 && r2 < s.length() && s[l2] == s[r2]) {

                if(r2 - l2 + 1 > resLen) {
                    res = s.substr(l2, r2 - l2 + 1);
                    resLen = r2 - l2 + 1;
                }

                l2--;
                r2++;
            }
        }
       return res;
    }
};