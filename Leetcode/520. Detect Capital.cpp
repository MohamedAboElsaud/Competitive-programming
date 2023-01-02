class Solution {
public:
    bool detectCapitalUse(string s) {
    int x=0, y=0;
    for (auto& i : s) {
        if (i >= 'a' && i <= 'z')x++;
        if (i >= 'A' && i <= 'Z')y++;
    }
    if (x == s.size() || y == s.size() || s[0] <= 'Z' && y == 1)return 1;
    else return 0;
    }
};