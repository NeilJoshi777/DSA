#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rvrs(vector<char>& s, int i){
          if(i >= s.size()/2) return;
          swap(s[i], s[s.size()-i-1]);
          return rvrs(s, i+1);
    }
    void reverseString(vector<char>& s) {
        rvrs(s, 0);
    }
};