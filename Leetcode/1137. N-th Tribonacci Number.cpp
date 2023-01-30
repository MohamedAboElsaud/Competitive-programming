class Solution {
public:
    int tribonacci(int n) {
        deque<int>q={0,1,1};
        if (n==0)return 0;
        if (n==1)return 1;
        for(int i=3;i<n+1;++i){
          int  x=q[i-1]+q[i-2]+q[i-3];
           q.push_back(x);
        }
        return q.back();
    }
};