#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    vector <int> P;
    cin >> n;
    if(n % 2 != 0)
    {
        cout << "-1" << endl;
        return 0;
    }
    P = vector <int>(n+1);

    for(int i = 1; i <= n; i++)
        P[i] = i;
    for(int i = 1; i < n; i+= 2)
        swap(P[i], P[i+1]);
    for(int i = 1; i < n; i++)
    {
        cout << P[i] <<  " ";
    }
    cout << P[n] << '\n';
    return 0;
}