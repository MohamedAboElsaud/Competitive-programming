
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
#define ld long double;


using namespace std;
void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}
const int Max_specialization = 20,Max_patient=5;
string sta[2] = {"",""};
string Name[Max_specialization + 1][Max_patient + 1];
vector< priority_queue<pair<int,string>> >pq(21);
int choose() {
   int n = 0;
    while (true) {
        cout << "\nPlease enter your choice:"
            << "\n1) add new patient"
            << "\n2)Show all patient"
            << "\n3)get next patient"
        << "\n4) Exit ";
        cin >> n;
        if (n <= 0 || n >= 6)cout << "\nPlease enter the correct number,try again",n = 0;
        else  return n;
    }
   
}
void add_patient() {
    int sp, st; string name;
    cout << "\nEnter name, specialization , statis[0('regular') / 1('urgent')] : ";
    cin >> name >> sp >> st; sp--;
    if (!(sp < 20 && pq[sp].size() < 6))cout << "\nSorrry ,there are no position for you ";
    else if (st > 1 || st < 0)cout << "please enter your state correct and try again ";
    else   pq[sp].push({ st,name });

    //else cout << "Sorrry ,there are no position for you ";
}
void show_patients() {
    cout << "\n------------------------------------------- ";
        for (int i = 0; i < 20; i++) {
            cout << "\n***************** specialization of [ " << 1 + i << " ] ********************* ";
            if (pq[i].size()) {
                
                vector<pair<string, int>>v(100);
                int n = pq[i].size();
                while ( pq[i].size()) {
                    cout << "\n" << pq[i].top().second << " ";
                    if (pq[i].top().first) cout << "Urgent ";
                    else cout<<"Regular";
                    v.push_back({ pq[i].top().second ,pq[i].top().first });
                    pq[i].pop();
                }
                for (int j = 0; j < n; j++) {
                    pq[i].push({ v[j].second,v[j].first });
                    //  v.push_back({ pq[i].top().second ,pq[i].top().first });
                }
            }
            else cout << "\nthere is free";
        }
}
void get_next_patient() {
    int sp;
    cout << "\nEnter your specialization : ";
    cin >> sp;
    while(!(sp < 21 && sp >= 0)){
        cout << "please enter your specialization correct";
        cin >> sp;
    } 
    if (pq[sp].empty())cout << "\nNo patients at the moment. Have rest, Dr";
    else pq[sp].pop();
    cout << "\n" << pq[sp].top().second << "please go with the Dr";
}
void system() {
    int x;
    while (1) {
        x = choose();
        if (x == 1) add_patient();
        else if (x == 2)show_patients();
        else if (x == 3)get_next_patient();
        else if (x == 4) break;
    }
    cout<<"\nthanks";
}
int main()
{
    fast();
    system();
    
    return 0;
}

