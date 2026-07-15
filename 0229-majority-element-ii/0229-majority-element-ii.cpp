class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0, cnt2=0;
        int el1, el2;
        int n= nums.size();

        for(int i=0; i<n; i++){
            if(cnt1 == 0 && nums[i] != el2){
                cnt1 = 1;
                el1 = nums[i];
            }
            else if(cnt2 == 0 && nums[i] != el1){
                cnt2=1;
                el2 = nums[i];
            }

            else if(nums[i] == el1) cnt1++;
            else if(nums[i] == el2) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }

        int cntn1=0, cntn2=0;
        vector<int>ans;
        int mini = int(n/3)+1;
        for(int i = 0; i<n; i++){
            if(nums[i]==el1) cntn1++;
            if(nums[i]==el2) cntn2++;
        }
        if(cntn1 >= mini) ans.push_back(el1);
        if(cntn2 >= mini) ans.push_back(el2);

        return ans;
    }
};