map<char, int> mp;
bool cmp(string a, string b){
    for(int i = 0; i < min(a.size(), b.size()); i++){
        if(mp[a[i]] < mp[b[i]]){
            return 1;
        }
        else if(mp[a[i]] > mp[b[i]]){
            return 0;
        }
    }
    return  a.size() <= b.size()?1:0;
}
class Solution {
public:

    bool isAlienSorted(vector<string>& words, string order) {
          for(int i = 0; i < order.size(); i++){
            mp[order[i]] = i;
        }
        vector<string> x = words;
        sort(x.begin(), x.end(), cmp);
        return x == words;
    }
};