//https://codeforces.com/problemset/problem/151/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int mili = k * l;
    int slices = c * d;

    int ans = min(mili / nl, min(slices, p / np)) / n;
    cout << ans << endl;


    return 0;
}