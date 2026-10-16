class Solution {
public:
    bool isPalindrome(int i, int j, string s){
        while(i < j) {
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    void f(int i, int n, string s, vector<vector<string>>&ans, vector<string>&temp){
        
        
        if(i == n) {
            ans.push_back(temp);
            return;
        }

        for(int j=i; j<n; j++){
            if(isPalindrome(i, j, s)){
                temp.push_back(s.substr(i, j-i+1));
                f(j+1, n, s, ans, temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        int n = s.size();
        vector<string>temp;
        vector<vector<string>> ans;
        f(0, n, s, ans, temp);
        return ans;
    }
};