//https://codeforces.com/problemset/problem/224/A
#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a1, a2, a3;

    cin >> a1 >> a2 >> a3;

    for(int i = 1; i <= 10000; i++) {
        if( a1 % i == 0 && a2 % i == 0) {
            int f1 = a1 / i, f2 = a2 / i;
            if(f1*f2 == a3)
            {
                //cout << i << " " << f1 <<  " " << f2 << endl;
                int ans = 2*( (i + f2) + (i + f1) + (f1 + f2) );
                cout << ans << endl;
                break;
            }
        }
    }
    return 0;
}