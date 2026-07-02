class Solution {
public:
    int reverse(int x) {
        long long revn = 0;
        while(x!=0){
            long lstdgt=x%10;
            x=x/10;
            revn=(revn*10)+lstdgt;
        }
        if(revn > INT_MAX || revn < INT_MIN) return 0;
        return revn;
    }
};