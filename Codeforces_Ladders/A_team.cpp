//https://codeforces.com/problemset/problem/231/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string line;
    int counter = 0;

    cin >> n;
    while(n--)
    {
        int c = 0, x;
        for(int i = 0; i < 3; i++)
        {
            cin >> x;
            c += x;
        }
        if(c >= 2)
            counter ++;
    }
    cout << counter << '\n';

    return 0;
}

