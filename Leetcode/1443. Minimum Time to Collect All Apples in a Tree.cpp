class Solution {
public:
    int dfs(vector<int> v[],int n,int node,int l,vector<bool> &hasApple){
        int tree = 0;
        for(auto &i:v[node]){
            if(i!=l){
               tree +=  dfs(v,n,i,node,hasApple);
            }
        }
        if(v[node].size()==1 and node!=0){
            tree += hasApple[node];
        }
        else if(node!=0){
            if(tree!=0 or hasApple[node]) tree++; 
        }
        return tree;
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        int s = hasApple.size();
        vector<int> v[s];
        for(auto &i:edges){
            v[i[0]].push_back(i[1]);
            v[i[1]].push_back(i[0]);
        }
        int d = dfs(v,n,0,-1,hasApple);
        return 2*d;
    }
};