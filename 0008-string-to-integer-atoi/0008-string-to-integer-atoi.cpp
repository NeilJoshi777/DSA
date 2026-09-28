#include<bits/stdc++.h>
class Solution {
public:
    bool isDigit(char c){
        return c >= '0' && c<='9';
    }
    int myAtoi(string s) {
        int i=0;
        int num = 0;
        int sign = 1;

        while(i < s.length() && s[i] == ' '){
            i++;
        }
        if(i < s.length() && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if(i < s.length() && s[i] == '+') {
            sign = 1;
            i++;
        }

        

        while(i < s.length() && isDigit(s[i])){
            int digit = s[i] - '0';

            if(num == INT_MAX/10){
                if(sign == 1){
                    if(digit >= 7){
                        return INT_MAX;
                    }
                }
                else if(sign == -1){
                    if(digit >= 8){
                        return INT_MIN;
                    }
                }
            }

            if(num > INT_MAX/10){
                if(sign == 1){
                    return INT_MAX;
                }
                else return INT_MIN;
            }

            num = num*10 + digit;
            i++;
        }
        return sign*num;
    }
};