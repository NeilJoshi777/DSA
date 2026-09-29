class Solution {
public:
    int getMax(int freq[]){
          int maxcnt = INT_MIN;
          for(int i=0; i<26; i++){
            maxcnt = max(freq[i], maxcnt);
          }
          return maxcnt;
    }

    int getMin(int freq[26]){
        int mincnt = INT_MAX;
        for(int i=0; i<26; i++){
            if(freq[i] > 0){
            mincnt = min(freq[i], mincnt);
            }
        }
        return mincnt;
    }
    int beautySum(string s) {
        int sum = 0;
        for(int i=0; i<s.length(); i++){
            int freq[26] = {0};
            for(int j = i; j<s.length(); j++){
                freq[s[j] - 'a']++;
                int beauty = getMax(freq) - getMin(freq);
                sum += beauty;
            }
        }
        return sum;
    }
};