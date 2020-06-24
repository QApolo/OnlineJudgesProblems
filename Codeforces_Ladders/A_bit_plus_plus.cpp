//https://codeforces.com/problemset/problem/282/A
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int x = 0;
    string line;

    while(n--)
    {
        cin >> line;
        if(line.find('-') != string::npos)
            x--;
        else
            x++;
    }
    cout << x << endl;

    return 0;
}