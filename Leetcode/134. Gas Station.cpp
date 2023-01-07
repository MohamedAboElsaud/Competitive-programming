class Solution {
public:
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int x = 0, res = 0, z = 0;
    for (int i = 0; i < gas.size(); i++) {
        x += gas[i] - cost[i];
        if (x < 0)
        {
            res += x;
            x = 0;
            z = i+1;
        }
    }
    res += x;
    return ((res >= 0) ? z : -1);
}
};