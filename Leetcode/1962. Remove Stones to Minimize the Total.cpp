class Solution {
public:
#include <iostream>
#include<numeric>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <cstring>
#include <stack>
#include <vector>
#include <queue>
#include <deque>
int minStoneSum(vector<int>& piles, int k) {
    priority_queue<int>p;
    for (auto& i : piles)p.push(i);
    while (k--)
    {
        int x = p.top();
        p.pop();
        p.push((x + 1) / 2);

    }
    int res = 0;
    while (p.size())
    {
        res += p.top();
        p.pop();

    }
    return res;
}
};