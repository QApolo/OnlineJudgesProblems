#include <bits/stdc++.h>

using namespace std;

int main()
{


    int n;
    double pi;
    double s = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> pi;
        s += (pi / double(n));
    }
    cout <<fixed << setprecision(12)<< s << endl;

}