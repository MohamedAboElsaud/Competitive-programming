class Solution {
public:
typedef pair<int, int> pd;
vector<int> getOrder(vector<vector<int>>& tasks) {
    deque<pair<int, pair<int,int>>>res(tasks.size());
    priority_queue<pd, vector<pd>, greater<pd> > p;
    for (int i = 0; i < tasks.size(); i++) {
        res[i].first = tasks[i][0] ;
        res[i].second.first = tasks[i][1];
        res[i].second.second = i;

    }
    sort(res.begin(), res.end());
    long long x = 1;
    vector<int>v;
    while (true)
    {
        while (res.size() && x >= res.front().first)
        {
            p.push({ res.front().second.first,res.front().second.second });
            res.pop_front();
        }
        if (p.size()) {
            v.push_back(p.top().second);
           // cout << p.top().second<<' ';
            x += p.top().first;
            p.pop();
        }
        else x=res.front().first;
        if (res.empty() && p.empty())break;
    }
   // for (auto& i : v)cout << i << ' ';
    return v;

}
};