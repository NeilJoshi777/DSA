class Solution {
public:
    int fn(vector<int>& nums, int partitn){
        int part=1, sums=0;
        for(int i=0; i<nums.size(); i++){
            if(sums + nums[i] <= partitn){
                sums+=nums[i];
            }
            else{
                part++;
                sums = nums[i];
            }
        }
        return part;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while(low <= high){
            int mid = low + (high-low)/2;
            int noOfparts = fn(nums, mid);

            if(noOfparts > k) low = mid + 1;
            else high = mid - 1;
        }
        return low;
    }
};