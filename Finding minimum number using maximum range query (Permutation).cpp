
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

link : https://codeforces.com/group/u3Ii79X3NY/contest/270254/problem/L

using namespace std;
void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}
ll const N = 1000 + 7;

int main()
{
    fast();


      freopen("mex.in", "r", stdin);
    ll t; cin >> t;
    while (t--) {
        ll n, a, b, l, r, res, md, i, ml, mr, q, mn; cin >> n >> q;
        vector< ll> v(n + 5), vl(n + 5, 1e6), vr(n + 5, 1e6);
        for (i = 1; i <= n; i++) {
            cin >> v[i];
            if (i > 1)vl[i] = min(v[i], vl[i - 1]);
            else vl[i] = v[i];
        }
        vr[n] = v[n];
        for (i = n - 1; i >= 1; i--) {
            vr[i] = min(vr[i + 1], v[i]);
        }

        //for (i = 1; i <= n; i++) {
        //    cout << vr[i] << " ";
        //}
        //cout << "\n";
        //for (i = 1; i <= n; i++) {
        //    cout << vl[i] << " ";
        //}
        while (q--) {
            cin >> l >> r;
            mn = min(vl[l - 1], vr[r + 1]);
            if (mn == 1e6)cout << n + 1 << "\n";
            else cout << mn << "\n";
        }

    }
    return 0;
}
