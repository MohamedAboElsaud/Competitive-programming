
class Solution {
public:
 bool ispalindrome(string s){
        for(int i=0;i<s.size()/2;++i){
            if(s[i]==s[s.size()-1-i]){
                continue;
            }
            return false;
        }
        return true;
    }
 void dfs(vector<vector<string>>&res,vector<string>&x,string s){
   if(s.size()==0){ 
       res.push_back(x);
       return;
   }
    for(int i=0;i<s.size();++i){
        string check=s.substr(0,i+1);
        if(ispalindrome(check)){
            x.push_back(check);
            dfs(res,x,s.substr(i+1));
            x.pop_back();

        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>temp;
        dfs(ans,temp,s);
        return ans;
    }
};