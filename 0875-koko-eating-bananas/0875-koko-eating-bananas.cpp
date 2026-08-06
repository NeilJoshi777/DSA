class Solution {
public:
    int findmax(vector<int>& piles){
        int maxi = INT_MIN;
        int n = piles.size();
        for(int i=0; i<n; i++){
            maxi = max(maxi, piles[i]);
        }
        return maxi;

    }

    long long calHours(vector<int>& piles, int h){
        long long int totalHours = 0;
        int n = piles.size();
        for(int i=0; i<n; i++){
            totalHours += (piles[i] + h - 1) / h;
        }
        return totalHours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = findmax(piles);
        int ans = INT_MAX;
        while(low <= high){
            int mid = low + (high - low)/2;
            long long totalH = calHours(piles, mid);
            if(totalH <= h){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};