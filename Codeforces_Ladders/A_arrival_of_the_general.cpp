#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    vector <int> A;
    int minor = 200, major = 0;
    int pmin, pmaj;
    cin >> n;
    A = vector<int>(n);
    for(int i = 0; i < n; i++)
        cin >> A[i];
    for(int i = 0; i < n; i++)
    {
        if(A[i] <= minor)
        {
            minor = A[i];
            pmin = i;
        }
    }
    int counter = 0;
    for(int i = pmin; i < n-1; i++)
    {
        swap(A[i], A[i+1]);
        counter++;
    }

    for(int i = 0; i < n; i++)
    {
        if(A[i] > major)
        {
            major = A[i];
            pmaj = i;
        }
    }
    for(int i = pmaj; i > 0; i--)
    {
        swap(A[i], A[i-1]);
        counter++;
    }
    cout << counter << '\n';
    return 0;
}