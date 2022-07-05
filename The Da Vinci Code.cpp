//link :https://codeforces.com/group/u3Ii79X3NY/contest/272628/problem/J

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

ll gcd(int a, int b)
{
    if (b == 0)return a;
    return gcd(b, a % b);
}
int count_num(string s, string ss) {
    int x = 0;
    for (int f = s.find(ss); f != -1; f = s.find(ss, f + ss.size())) {
        x++;

    }
    return x;
}
bool bal(string s) {
    for (int i = 0; i < s.size() / 2; i++) {
        if (s[i] != s[s.size() - 1 - i])return 0;

    }
    return 1;
}
bool isprime(ll n)
{
    if (n <= 1)return false;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}
bool cmp(const pair<ll, ll>& a,
    const  pair<ll, ll>& b)
{
    return a.first<b.first;
}


ll fun(ll i, ll j) {
    if (j == 0) {
        string s = to_string(i);
        s = "0" + s + "0";
        ll sum = 0;
        for (int ii = 0; ii < s.size(); ii++) {
            sum += (s[ii] - '0');
        }
        return sum;
    }

    return fun(fun(i, 0), j - 1);
}
int dx[] = { 1, 1, 1, 0, -1, -1, -1, 0 };
int dy[] = { -1, 0, 1, 1, 1, 0, -1, -1 };
int main()
{
    fast();



    ll l = 0, r, n, k,x=-1; cin >> n>>k;
    vector<ll>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if(i) v[i] = v[i - 1] + v[i];
    }

    r = n;
    while (l<=r)
    {
        ll md = l+(r -l+1) / 2;
        ll res = 1;
        if (v[md - 1] > k)res = 0;
        for (ll i = md; i < n; i++) {
            if (v[i] - v[i - md] > k) {
                res = 0; break;
            }
        }
        if (res)l = md + 1,x=md;
        else r = md - 1;

    }
    cout << x;

   
    return 0;

}