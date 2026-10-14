class Solution {
public:
    void fn(int i, int k, int n, int sum, vector<vector<int>>&ans, vector<int>&ds){
        if(sum == n && k == 0 ){
            ans.push_back(ds);
            return;
        }
        if(sum > n) return;
        if(i == 10) return;

        ds.push_back(i);
        fn(i+1, k-1, n, sum+i, ans, ds);
        ds.pop_back();

        fn(i+1, k, n, sum, ans, ds);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds;
    
        fn(1, k, n, 0, ans, ds);
        return ans;
    }
};