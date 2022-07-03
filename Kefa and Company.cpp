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



    ll n, l = 0, r = 0, mx = 0,sum=0, d; cin >> n >> d;
    vector<pair<ll, ll>>a(n);
    for (auto& i : a)cin >> i.first >> i.second;
    sort(a.begin(), a.end());
   // for (auto& i : a)cout<< i.first <<" "<< i.second<<'\n';
    while (r<n)
    {
        if (a[r].first - a[l].first < d) {
            sum += a[r++].second; mx = max(mx, sum);
        }
        else {
            sum -= a[l++].second;
        }
        

    }
    cout << mx;


    return 0;

}