class Solution {
public:
    int indexMin(vector<int>& nums){
       for(int i = 0; i< nums.size()-1; i++){
        if(nums[i] > nums[i+1]){
            return (i+1);
        }

       }
       return 0;
    }
    bool check(vector<int>& nums) {
        vector<int>a = nums;
        sort(a.begin(), a.end());
        int x = (nums.size() - indexMin(nums))%nums.size();
        if(nums == a) return true;
       for(int i = 0; i< nums.size(); i++){
         if(nums[i] != a[(i+x)%a.size()]) return false;
       }
        return true;
    }
};