class Solution {
public:
    int num(char s)
    {
        if(s == 'I')
            return 1;
        else if(s == 'V')
            return 5;
        else if(s == 'X')
            return 10;
        else if(s == 'L')
            return 50;
        else if(s == 'C')
            return 100;
        else if(s == 'D')
            return 500;
        else
            return 1000;
    }
    int romanToInt(string s) {
        int sum = 0;
        for(int index = 0; index < s.size()-1; index++){
            if(num(s[index]) < num(s[index+1])){
                sum -= num(s[index]);
            }
            else{
                sum += num(s[index]);
            }
        }
        sum += num(s[s.size()-1]);
        return sum;
        }
};