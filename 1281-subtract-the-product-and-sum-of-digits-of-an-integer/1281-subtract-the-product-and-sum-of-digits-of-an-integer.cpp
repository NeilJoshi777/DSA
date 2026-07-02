class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int prdct = 1;
        while(n>0){
            int lstdgt = n%10;
            n = n/10;

            sum = sum + lstdgt;
            prdct = prdct * lstdgt;
        }
        return (prdct-sum);
    }
};