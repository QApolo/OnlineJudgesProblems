//http://codeforces.com/problemset/problem/227/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    int ai, qi;
    unordered_map <int, int> positions;
    
    cin >> n;
    for(int i = 0; i < n; i++) 
    {
        cin >> ai;
        positions[ai] = i+1;
    }

    cin >> m;
    long long v = 0, p = 0;
    for(int j = 0; j < m; j++) 
    {
        cin >> qi;
        v += positions[qi];
        p += (n - positions[qi] + 1);
    }
    cout << v << " " << p << endl;
    return 0;
}