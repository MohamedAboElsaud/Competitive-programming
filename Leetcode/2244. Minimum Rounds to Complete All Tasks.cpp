class Solution {
public:
int minimumRounds(vector<int>& tasks) {
    int x = 0;
    map<int, int>mp;
    for (auto& i : tasks) {
        mp[i]++;
    }
    for (auto& i : mp) {
        if (i.second == 1)return -1;
        x += (i.second+2) / 3;
    }
    return x;
}
};