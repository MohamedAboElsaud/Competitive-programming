
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

link : https://codeforces.com/group/u3Ii79X3NY/contest/270254/problem/N

using namespace std;
void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}
ll const N = 1000 + 7;
ll a[N][N],t, i, n, m, k, l, r, x, y,xx,yy,my,mx,myy,mxx, res,j;
int main()
{
    fast();
    cin >> t;
    while (t--) {
        res = 0;
        cin >> n >> m >> k;
        for (i = 1; i <= 1005; i++)
            for (j = 1; j <= 1005; j++)
                a[i][j] = 0;

        while (k--) {
            cin >> x >> y >> xx >> yy;
            mx = min(xx, x);
            mxx = max(xx, x);
            my = min(y, yy);
            myy = max(y, yy);
            a[mx][my]++;
            a[mx][myy + 1]--;
            a[mxx+1][my]--;
            a[mxx+1][myy + 1]++;
           /* a[mx][my]++;
            a[mxx+1][myy+1]--;*/
        }
        for (i = 1; i <= n; i++)
            for (j = 1; j <= m; j++)
                a[i][j] += a[i - 1][j] + a[i][j - 1]- a[i - 1][j - 1];
   

    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            if(!a[i][j])
            res ++;

    cout << res << "\n";
}
    return 0;
}
