#include <bits/stdc++.h>

using namespace std;

int main()
{


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string A, B;
    cin >> A;
    cin >> B;

    string C(A.length(), '0');

    for(int i = 0; i < A.length(); i++)
    {
        if(A[i] != B[i])
        {
            C[i] = '1';
        }
        else C[i] = '0';
    }
    cout << C << endl;

    return 0;
}