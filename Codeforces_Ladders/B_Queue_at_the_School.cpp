#include <bits/stdc++.h>

using namespace std;

int main()
{

    short n, t;

    cin >> n >> t;

    string line;
    cin >> line;

    while(t--)
    {
        for(int i = 0; i < n; i++)
        {
            if(line[i] == 'B' && line[i+1] == 'G')
            {
                line[i] = 'G';
                line[i+1] = 'B';
                i++;//since we did a change, we don't consider it the next time
            }else
            {
                line[i] = line[i];
                line[i+1] = line[i+1];
            }
        }
    }
    cout << line << endl;


    return 0;
}