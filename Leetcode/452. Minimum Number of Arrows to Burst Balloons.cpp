class Solution {
public:
int findMinArrowShots(vector<vector<int>>& points) {
    sort(points.begin(),points.end());
    int x = points[0][1], res = 0;
    for (int i = 0; i < points.size(); i++) {
        if (points[i][0] > x)res++, x = points[i][1];
        else x=min(x,points[i][1]);
    }
    return res+1;
}
};