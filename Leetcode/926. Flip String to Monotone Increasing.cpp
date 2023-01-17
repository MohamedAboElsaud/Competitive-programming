class Solution {
public:
    int minFlipsMonoIncr(string s) {
         int res = 0, x = 0;
        for (auto &i : s)
        { 
            if (i == '1')
                x++;
            else{
                res++;
            res = min(res, x);
            }
        }
        return res;
    }
};