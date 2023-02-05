class Solution {
public:
vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        vector<int> f(26, 0),ff(26, 0);
        int n = p.size(),z = s.size();
        if(z < n)return res;
        int l = 0,r = 0;
        while(r < n)
        {
            ff[p[r] - 'a'] += 1;
            f[s[r] - 'a'] += 1;
            r++;
        }
        r -=1;
        while(r < z)
        {   r++;
            if(ff == f)res.push_back(l);
            if(r != z)f[s[r] - 'a'] += 1;
            f[s[l] - 'a'] -=1 ;
            l ++;
        }
        return res;
    }
};