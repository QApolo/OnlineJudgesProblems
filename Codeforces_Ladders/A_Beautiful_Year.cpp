#include <bits/stdc++.h>

using namespace std;

int main()
{

    int y;
    cin >> y;
    y++;
    while(true)
    {
        int aux = y;
        int V[10] = {0};
        bool rep = false;
        while(aux)
        {
            if(!V[aux % 10])
                V[aux % 10]++;
            else
            {
                rep = true;
                break;
            }
            aux /= 10;
        }
        if(rep)
            y++;
        else break;
    }
    cout << y << endl;

    return 0;
}