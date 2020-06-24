#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    int l_op = 0, r_op = 0, l_clo = 0, r_clo = 0;
    short l, r;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> l >> r;
        if(l) l_clo ++;
        else l_op ++;

        if(r) r_clo ++;
        else r_op ++;
    }
    cout <<  ( min(l_op, l_clo)) + ( min(r_op, r_clo)) << '\n';



    return 0;
}