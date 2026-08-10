class Solution {
public:
    int fn(vector<int>& weights, int capacity){
        int n=weights.size();
        int load = 0, day = 1;
        for(int i=0; i<n; i++){
            if(load+weights[i] > capacity){
                day = day + 1;
                load = weights[i];
            }
            else{
                load += weights[i];
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int ans = 0;

        while(low <= high){
            int mid = low + (high - low)/2;
            int numOfD = fn(weights, mid);
            if(numOfD <= days){
                high = mid - 1;
                ans = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};