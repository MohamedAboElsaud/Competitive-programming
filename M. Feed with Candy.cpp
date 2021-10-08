
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


using namespace std;
void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}

ll h[2005], t[2005], m[2005],n,x;
ll solve(ll tt,ll x) {
    ll mass = 0, ii;
    for (ll i = 0; i < n; i++) {

        if (h[i] <= x && m[i] > mass) {
            if (t[i] == tt) {
                ii = i;
                mass = m[i];
            }

        }
    }
    if (!mass)return 0;
    m[ii] = 0;
    ll res = solve(1 - tt, x + mass);
    m[ii] = mass;
    return ++res;
}
int main()
{
    fast();
    cin >> n >> x;
    for (ll i = 0; i < n; i++) {
        cin >> t[i] >> h[i] >> m[i];

    }
    cout << max(solve(0, x), solve(1, x));
    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file