//link:https://codeforces.com/group/u3Ii79X3NY/contest/274952/problem/G

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


int main()
{
    fast();

    int n,m,k,l,r,x,res=0,mn,mx,sum=0; cin >> n>>x;

    if (n == 1)cout << "Yes\n" << x;
    else if (n == 2 && x == 0)cout << "No";
    else if (n == 2 )cout << "Yes\n" << 0 << " " <<x;
    else {
        m = 1 << 17; k = 1 << 18;
        cout << "Yes\n" << m << " " << k << " ";
        res = m ^ k; 
            for (int i = 1; i < n-2; i++)cout << i << " ", res ^= i;
            cout << (res ^ x);
        
    }
    return 0;
}

