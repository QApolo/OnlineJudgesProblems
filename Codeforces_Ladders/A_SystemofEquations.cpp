//https://codeforces.com/problemset/problem/214/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int counter = 0;
    for(int a = 0; a < 1000; a++) {
        if ( a * (a*a*a - 2*n*a+1) - m + n*n == 0 && n - a*a >= 0) {
            //cout << a << " " << n - a*a << endl;
            counter++;
        }
    }
    cout << counter << endl;
}
