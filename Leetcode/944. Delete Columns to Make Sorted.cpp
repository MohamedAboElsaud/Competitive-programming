class Solution {
public:
int minDeletionSize(vector<string>& strs) {
    set<int>st;
    for (int i = 1; i < strs.size(); i++) {
        for (int j = 0; j < strs[0].size(); j++) {
            if (strs[i][j] < strs[i - 1][j])st.insert(j);
        }
    }
    
    return st.size();;
}
};