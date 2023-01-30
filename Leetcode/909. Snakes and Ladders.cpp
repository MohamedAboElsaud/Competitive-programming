class Solution {
public:
int snakesAndLadders(vector<vector<int>> &board) {
        int n = board.size(), x = 1;
        vector<pair<int, int>> v(n*n+1);
        vector<int> cl(n);
        iota(cl.begin(), cl.end(), 0);
        for (int r = n - 1; r >= 0; r--) {
            for (int c : cl) {
                v[x++] = {r, c};
            }
            reverse(cl.begin(), cl.end());
        }
        cl=vector<int>(n*n+1, -1);
        cl[1] = 0;
        queue<int> q;
        q.push(1);
        while (!q.empty()) {
            x= q.front();
            q.pop();
            for (int i = x + 1; i <= min(x+6, n*n); i++) {
                auto [r, c] = v[i];
                int j = board[r][c] != -1 ? board[r][c] : i;
                if (cl[j] == -1) {
                    cl[j] = cl[x] + 1;
                    q.push(j);
                }
            }
        }
        return cl[n*n];
    }
};