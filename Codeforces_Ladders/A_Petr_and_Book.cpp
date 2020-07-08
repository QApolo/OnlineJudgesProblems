//https://codeforces.com/problemset/problem/139/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i = 0, pagesDay[7];
    cin >> n;

    for(int j = 0; j < 7; j++)
        cin >> pagesDay[j];

    while(true)
    {
        n -= pagesDay[i];
        if(n <= 0)
            break;
        i = (i + 1) % 7;
    }
    cout << i + 1 << endl;
    
    return 0;
}