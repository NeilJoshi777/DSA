class Solution {
public:
    bool possible(vector<int>& bloomDay, int day, int m, int k){
         int cnt = 0;
         int noOfB = 0;
         int n = bloomDay.size();
         for(int i=0; i<n; i++){
            if(bloomDay[i] <= day){
                cnt++;
            }
            else{
                noOfB += (cnt/k);
                cnt = 0;
            }
         }
         noOfB += (cnt/k);
         if(noOfB >= m) return true;
            else return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
       long long val = m * 1LL * k * 1LL;
       if(n < val) return -1;

       int mini = INT_MAX, maxi = INT_MIN;
       for(int i=0; i<n; i++){
        mini = min(mini, bloomDay[i]);
        maxi = max(maxi, bloomDay[i]);
       }

       int low = mini, high = maxi;
       int ans = high;
       while(low <= high){
        int mid = low + (high - low)/2;
        if(possible(bloomDay, mid, m, k) == true){
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
       }
       return ans;
    }
};