class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if (trust.size() == 0 && n == 1) 
            return 1;
        vector<int> v(n + 1);
        for (auto &i : trust) {
            v[i[0]]--;
            v[i[1]]++;
        }
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == n - 1) return i;
        }
        return -1;
    }
};