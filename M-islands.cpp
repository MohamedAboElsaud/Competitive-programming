
/*
|||   ╔═══════════╗            ╔════╗            ╔═══════════╗    ╔═══════════╗    ╔══════════╗       |||
|||   ║███████████║            ║████║            ║███████████║    ║███████████║    ║██████████║       |||
|||   ║██╔════════╝           ║██║║██║           ║██╔════════╝    ║██╔════════╝    ║██══════╗██║      |||
|||   ║██║                   ║██║╔╗║██║          ║██║             ║██║             ║██       ║██║     |||
|||   ║██╚════════╗         ║██║╔╚╝╗║██║         ║██╚════════╗    ║██╚════════╗    ║██        ║██║    |||
|||   ║███████████║        ║██║ ╚══╝ ║██║        ║███████████║    ║███████████║    ║██         ║██║   |||
|||   ╚════════╗██║       ║██║██║██║██║██║       ║██╔════════╝    ║██╔════════╝    ║██        ║██║    |||
|||            ║██║      ║██║ ╔═╔══╗═╗ ║██║      ║██║             ║██║             ║██       ║██║     |||
|||   ╔════════╝██║     ║██║ ╔╚╔╚══╝╗╝╗ ║██║     ║██╚════════╗    ║██╚════════╗    ║██══════╝██║      |||
|||   ║███████████║    ║██║ ╔╚╔╚════╝╗╝╗ ║██║    ║███████████║    ║███████████║    ║██████████║       |||
|||   ╚═══════════╝    ╚══╝ ╚═╚══════╝═╝ ╚══╝    ╚═══════════╝    ╚═══════════╝    ╚══════════╝       |||
|||                                                                                                   |||
|||                                                                                                   |||
|||                                  ╔════════╗  ╔════════════╗                                       |||
|||                         ║██║     ║████████║  ║████████████║     ║██║                              |||
|||    ║█║ ║█║            ║██║       ╚══║██║══╝  ╚════║██║════╝       ║██║            ║█║ ║█║         |||
|||   ║█ ║█║ █║         ║██║            ║██║          ║██║              ║██║         ║█ ║█║ █║        |||
|||    ║█   █║        ║██║              ║██║          ║██║                ║██║        ║█   █║         |||
|||     ║█║█║           ║██║            ║██║          ║██║              ║██║           ║█║█║          |||
|||      ║█║              ║██║       ╔══║██║══╗       ║██║            ║██║              ║█║           |||
|||                         ║██║     ║████████║      ╔║██║╗         ║██║                              |||
|||                                  ╚════════╝      ╚════╝                                           |||
*/

link :https://codeforces.com/group/u3Ii79X3NY/contest/270796/problem/K

#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <string>
#include <stack>
#include <vector>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <iomanip>
#include <fstream>
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ll long long int
#define ld long double


using namespace std;
void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}

ll n, m, a, b,l,r,res,md;
vector<pair<ll, ll>>v;
vector<pair<ll, ll>>vv(n);
void merge(pair<ll, ll>p) {
    res = -1,l=0,r=v.size()-1;
    while (l <= r) {
        md = l + (r - l) / 2;
        if (v[md].first <= p.first)res = md, l = md + 1;
        else r = md - 1;
    }
    if (res != -1 && p.first <= v[res].second) {
        v[res].first = min(v[res].first, p.first);
        v[res].second = max(v[res].second, p.second);
    }
    else v.push_back(p);
}

bool chk(ll a, ll b) {
    l = 0, r = v.size()-1, res = -1;
    while (l<=r)
    {
        md = l + (r - l) / 2;
        if (v[md].first <= a)res = md, l = md + 1;
        else r = md - 1;
    }

    if (res != -1)return v[res].second >= b;
    return 0;
}


int main()
{
    fast();
    cin >> n >> m;
    for (ll i = 0; i < n; i++) {
        cin >> a >> b;
        vv.push_back({ a,b });
    }
    sort(vv.begin(), vv.end());
    for (auto it : vv) {
        if (!v.empty())merge( it);
        else v.push_back(it);
    }
    cin >> n;
    while (n--) {
        cin >> a >> b;
        if (a > b)swap(a, b);
        if (chk(a, b))cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
