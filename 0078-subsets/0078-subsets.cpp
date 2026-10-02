class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int totalSub = 1 << n;

        vector<vector<int>> ans;
        for(int i=0; i<totalSub; i++){
            vector<int>sub;
            for(int j=0; j<n; j++){
                if(i & (1<<j)){
                    sub.push_back(nums[j]);
                }
            }
            ans.push_back(sub);
        }
        return ans;
    }
};