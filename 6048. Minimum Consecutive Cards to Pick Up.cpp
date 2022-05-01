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



int minimumCardPickup(vector<int>& v) {
    int a[1000005] = { 0 };
    int mn = 50000005;
  
    for (int i = 0; i < v.size(); i++) {
        if (a[v[i]] && i + 1 != a[v[i]]) {
            mn = min(i + 1 - a[v[i]], mn);
            a[v[i]] = i + 1;
        }
        else {
            a[v[i]] = i + 1;
        }


    }
    if (50000005 == mn)return -1;
    return mn + 1;
}
int main()
{
    fast();
    vector<int>v = { 1,0,5,3 };
    cout << minimumCardPickup(v);
    return 0;
}