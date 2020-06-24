#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    int a;
    vector <int> A;


    cin >> n;
    A = vector<int>(n);
    for(int i = 0; i < n; i++)
        cin >> A[i];

    int count = 0;
    bool sofar = true;
    for(int i = 1; i < n; i++)
    {
        sofar = true;
        for(int j = 0; j < i; j++)
            sofar = sofar and (A[i] > A[j]);
        if(sofar) count++;

        sofar = true;
        for(int j = 0; j < i; j++)
            sofar = sofar and (A[i] < A[j]);
        if(sofar) count++;
    }    
    cout << count << endl;
    return 0;
}