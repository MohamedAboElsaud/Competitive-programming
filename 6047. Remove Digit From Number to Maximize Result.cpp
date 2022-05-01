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
string removeDigit(string s, char digit) {
    string  ss;
    int a[150] = { 0 };
    for (int i = 0; i < s.size(); i++) {
        a[s[i]]++;
    }s += "9";
    for (int i = 0; i < s.size(); i++) {

        if (s[i] == digit && a[digit] > 0) {
            if (s[i + 1] > digit) {
                ss = s.substr(0, i) + s.substr(i + 1, s.size() - i - 2); break;
            }
            else if (s[i] == digit && a[digit] == 1) {
                ss = s.substr(0, i) + s.substr(i + 1, s.size() - i - 2); break;
            }
            else {
                a[s[i]]--;
            }

        }
    }
    
    return ss;
}
int main()
{
    fast();

    cout << removeDigit("1233235",'3');
    return 0;
}