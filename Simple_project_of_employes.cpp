
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
ll MX = 100,NM=0,n;
vector<ll>Age(MX), Salaries(MX);
vector<string>Name(MX), Gender(MX);
int choose() {
    n = 0;
    while (!n) {
        cout << "\nPlease enter your choice:"
            << "\n1) add new employee"
            << "\n2)Show all employee"
            << "\n3)delete employee by name"
            << "\n4)update salary by name"
        << "\n5) Exit";
        cin >> n;
        if (n <= 0 || n >= 6)cout << "\nPlease enter the correct number,try again",n = 0;

    }
    return n;
}
void emp_add() {
    if (NM >= Age.size())Age.resize(NM * 2), Name.resize(NM * 2), Salaries.resize(NM * 2),Gender.resize(NM * 2);
    cout << "\nEnter your name :";
    cin >> Name[NM];
    cout << "\nEnter your age :";
    cin >> Age[NM];
    cout << "\nEnter your salary :";
    cin >> Salaries[NM];
    cout << "\nEnter your gender :";
    cin >> Gender[NM++];

}
void emp_show() {
    cout << "\n---------------------------------------------"
        <<"\nName Age Salary Gender ";
    for (int i = 0; i < NM; i++) {
        cout <<'\n' << Name[i] << " " << Age[i] << " " << Salaries[i] << " " << Gender[i];
    }
}
void emp_delete() {
    string s;
    cout << "\nEnter the name who you need delete";
    cin >> s;
    for (int i = 0; i < NM; i++) {
        if (Name[i] == s) {
            Name.erase(Name.begin()+i);Age.erase(Age.begin()+i); Salaries.erase(Salaries.begin()+i); Gender.erase(Gender.begin()+i);;
            break;
        }
    }
}
void emp_update() {
    string s; int sa, i = 0, f = 1;
    cout << "\nEnter the name and salary to be become ";
    cin >> s>>sa;
   while(i<NM) {
       
        if (Name[i] == s) {
            f = 0;
            Salaries[i] = sa;
            break;
        }
        i++;
    }
   if (f)cout << "\nNot found ";
}
void system() {
    int x;
    while (1) {
        x = choose();
        if (x == 1) emp_add();
        else if (x == 2)emp_show();
        else if (x == 3)emp_delete();
        else if (x == 4)emp_update();

        else break;
    }
    cout<<"\nthanks";
}
int main()
{
    fast();
    system();
    
    return 0;
}

