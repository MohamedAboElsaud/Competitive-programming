class Solution {
public:
  vector<int> dfs(vector<vector<int>> &v, string &s, int i,vector<int>&res){
    vector<int> z(26, 0);
    res[i] = 1;
    z[s[i] - 'a'] = 1;
    for(int j = 0; j != v[i].size(); j++)
      if(!res[v[i][j]]){
        vector<int> x = dfs(v, s,v[i][j],res);
        for(int k = 0; k != 26; k++) z[k] += x[k];
      }
    res[i] = z[s[i] - 'a'];
    return z;
  }
    vector<int> countSubTrees(int n, vector<vector<int>>& v, string labels) {
         vector<vector<int>> x(n);
    vector<int> res(n,0);
    for(int i = 0; i != v.size(); i++)
     {x[v[i][0]].push_back(v[i][1]);
      x[v[i][1]].push_back(v[i][0]);
     }
    dfs(x, labels, 0,res);
    return res;
    }
};