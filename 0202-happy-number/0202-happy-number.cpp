class Solution {
public:
    int sqursum(int n){
        int sum = 0;
        while(n>0){
            int lstdgt = n%10;
            sum = sum + (lstdgt*lstdgt);
            n = n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int>seen;
        while (n != 1){
            if(seen.find(n) != seen.end()) return false;
            else seen.insert(n);
            n = sqursum(n);
        }
        return true;
    }  
};