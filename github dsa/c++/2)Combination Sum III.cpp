class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> v, int k, int n, int l) {
        if(n < 0 || k < 0) return; 

        if(k == 0 && n == 0) {
            ans.push_back(v);
            return;
        }

        for(int i=l+1; i<=9; i++) {
            v.push_back(i);
            solve(v, k - 1, n - i, i);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> v;
        solve(v, k, n, 0);
        return ans;
    }
};
