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

//link : https://codeforces.com/group/u3Ii79X3NY/contest/270796/problem/Q

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

int fr[1005][1005] = { 0 };
int main()
{
    fast();

    ll n,i, t,mx, minwide;
    cin >> t;
    while (t--) {
        stack<ll>w, h; mx = 0;
        cin >> n;
        vector<ll>v(n + 5, 0);
        for (i = 0; i < n; i++)cin >> v[i];
        for (i = 0; i <= n; i++) {
            minwide = 1e8;
            while (!h.empty() && h.top() > v[i]) {
                minwide = w.top();
                mx = max(mx, h.top() * (i - w.top()));
                w.pop(), h.pop();
            }
            if (h.empty() || h.top() <= v[i]) {
                h.push(v[i]);
                w.push(min(i, minwide));
            }
        }
        cout << mx << "\n";
    }

    return 0;
}