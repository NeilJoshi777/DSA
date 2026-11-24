class Solution {
public:
    int maxLength(vector<int>& nums) {
        int res = 0;
        for(int i=0; i<nums.size(); i++){
            long long prodVal = nums[i];
            long long gcdVal = nums[i];
            long long lcmVal = nums[i];

            for(int j=i+1; j<nums.size(); j++){
                prodVal = prodVal*nums[j];
                gcdVal = gcd(nums[j], gcdVal);
                lcmVal = lcm(nums[j], lcmVal);

                if(prodVal > gcdVal*lcmVal) break;

                if(prodVal == gcdVal*lcmVal){
                    res = max(res, j-i+1);
                }
            }
        }
        return res;
    }
};