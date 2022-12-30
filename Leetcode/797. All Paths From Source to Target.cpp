class Solution {
public:
vector<vector<int>>res;
vector<int>x;
void dfs(vector<vector<int>>& graph,int now)
{
    x.push_back(now);
    if(now== graph.size()-1)
    {
        res.push_back(x);
    }
    for(int j=0;j<graph[now].size();j++)
    {
        dfs(graph,graph[now][j]);
    }
    x.pop_back();
}
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    res.clear();
    x.clear();
    dfs(graph,0);
    return res;
    }
};