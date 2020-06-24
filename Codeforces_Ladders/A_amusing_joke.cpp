#include <bits/stdc++.h>

using namespace std;

int main()
{

    string a, b, c;
    string d;
    cin >> a >> b >> c;
    d = a + b;

    sort(d.begin(), d.end());
    sort(c.begin(), c.end());

    if(c.length() != d.length())
    {
        cout << "NO" << endl;
    }
    else
    {
        bool equal = true;
        for(int i = 0; i < c.length(); i++)
        {
            if(c[i] != d[i])
            {
                equal = false;
                break;
            }
        }
        if(equal)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}