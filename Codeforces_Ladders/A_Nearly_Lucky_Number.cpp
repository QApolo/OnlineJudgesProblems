#include <bits/stdc++.h>

using namespace std;

int main()
{

    string number;
    cin >> number;

    int counter = 0;
    for(char c: number)
    {
        if ( c == '4' or c == '7')
        {
            counter ++;
        }
    }

    bool nearly_lucky = true;
    if(counter == 0)
        nearly_lucky = false;
    while(counter)
    {
        int dig = counter % 10;
        counter = counter / 10;

        if(!(dig == 4 or dig == 7))
        {
            nearly_lucky = false;
            break;
        }
    }
    if(nearly_lucky)
        cout << "YES" << '\n';
    else cout << "NO" << '\n';

    return 0;
}