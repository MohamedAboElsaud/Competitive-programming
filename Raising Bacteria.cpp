//link:https://codeforces.com/group/u3Ii79X3NY/contest/274952/problem/A

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

    int n; cin >> n;
    bitset<32>a(n);
    cout <<a.count();
    return 0;
}

