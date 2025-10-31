class Solution {
public:
    void get(vector<vector<int>> &ans, vector<int> a, int n, int k, int j) {
        // base case
        if (a.size() == k && n == 0) {
            ans.push_back(a);
            return;
        }
        if (n < 0 || a.size() > k)
            return;
        for (int i = j; i <= 9; i++) {
            a.push_back(i);
            get(ans, a, n - i, k, i + 1);
            a.pop_back();
        }
    }
    vector<vector<int>> combinationSum(int n, int k) {
        vector<vector<int>> ans;
        vector<int> a;
        get(ans, a, n, k, 1);
        return ans;
    }
};