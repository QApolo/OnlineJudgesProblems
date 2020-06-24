#include <bits/stdc++.h>

using namespace std;

int main()
{

    int m, n;

    cin >> n >> m;

    int candidate = 0;
    
    for(int i = n+1; i <= m; i++)
    {
        bool isPrime = true;
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
        {
            candidate = i;
            break;
        }
    }
    if(candidate == m)
    {
        cout << "YES" << '\n';
    }
    else cout << "NO" << '\n';
    return 0;
}