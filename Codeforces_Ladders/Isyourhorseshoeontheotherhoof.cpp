#include <bits/stdc++.h>

using namespace std;

int main()
{

    set <int> colors;
    int x;
    int res = 0;
    for(int i = 0; i < 4; i++)
    {
        cin >> x;
        if(colors.find(x) == colors.end())
        {
            colors.insert(x);
        }
        else res++;
    }
    cout << res << endl;

    return 0;
}
