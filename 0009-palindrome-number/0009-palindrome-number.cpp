class Solution {
public:
    bool isPalindrome(int x) {
        long long dup = x;
        long long revn = 0;
        while(x>0){
            int lstdgt=x%10;
            x=x/10;
            revn=(revn*10)+lstdgt;
        }
        
        if(revn > INT_MAX || revn < INT_MIN){
            return 0;
        }
        if(revn == dup) return true;
        else return false;

    }
};