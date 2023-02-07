class Solution {
public:
int totalFruit(vector<int>& fruits) {
        map<int, int> mp;
        int l = 0, r = 0, res = 0;
        while(r < fruits.size())
        {
            mp[fruits[r]]++;
            if(mp.size() <= 2) res = max(res, r-l+1);
            else
            {
                mp[fruits[l]]--;
                if(mp[fruits[l]] == 0) mp.erase(fruits[l]);
                l++;
            }
            r++;
        }
        return res; 
    }
};