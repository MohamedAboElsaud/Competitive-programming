class Solution {
public:
bool wordPattern(string pattern, string s) {
    vector<string>v;
    map<char, set<string>>mp;
    string ss = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            v.push_back(ss);
            ss = "";
        }
        else {
            ss += s[i];
        }
    }
    v.push_back(ss);
    if (pattern.size() != v.size())return 0;
    for (int i = 0; i < pattern.size(); i++) {
        mp[pattern[i]].insert( v[i]);
        if (mp[pattern[i]].size() > 1)return 0;
    }
    for (auto& i : mp) {
        for (auto& j : i.second) {
            for (auto& k : mp) {
                for (auto& d : k.second) {
                    if (i != k) {
                        if (j == d)return 0;
                    }
                }
            }
        }
    }
    return 1;
}
};