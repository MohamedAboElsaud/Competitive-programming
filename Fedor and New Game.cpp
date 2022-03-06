//link:https://codeforces.com/group/u3Ii79X3NY/contest/274952/problem/B
#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <cstring>
#include <stack>
#include <vector>
#include <queue>
#include <deque>
#include <set>
#include <bitset>
#include <map>
#include <iomanip>
#include <sstream>
#include <fstream>
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ll long long int
#define ld long double;



using namespace std;

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}



void print_num_in_bits(int n) {
    if (n <= 1) {
        cout << n;
        return;
    }
    print_num_in_bits(n >> 1);
    cout << (n & 1);
}
int main()
{
    fast();

    int n,m,k,res=0; cin >> n>>m>>k;
    vector<bitset<32>>v(m+1);
    for (int i = 0; i <= m; i++)cin >>res, v[i]=res;
    res = 0;
    for (int i = 0; i < m; i++)((v[m] ^ v[i]).count() <= k)?res++:res;
    cout <<res;
    return 0;
}

