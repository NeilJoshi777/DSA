class Solution {
public:
    bool canAliceWin(int n) {
        int remove = 10;
        bool aliceTrn = true;
        while(n >= remove){
            n -= remove;
            remove --;
            aliceTrn = !aliceTrn;
        }
        return !aliceTrn;
    }
};