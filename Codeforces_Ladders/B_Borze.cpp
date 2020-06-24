#include <bits/stdc++.h>

using namespace std;

int main()
{

    string code;
    cin >> code;

    short pos = 0;

    while(pos < code.length())
    {
        if(code[pos] == '.')
        {
            cout << '0';
        }
        else if(code[pos] == '-')
        {
            if(code[pos+1] == '-')
            {
                cout << '2';
            }
            else if(code[pos+1] == '.')
            {
                cout << '1';
            }
            pos++;
        }
        pos++;
    }
    cout << endl;
    return 0;
}