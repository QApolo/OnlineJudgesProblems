#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    string stones;

    cin >> n;
    cin >> stones;

    int counter = 0;
    for(int i = 1; i < stones.size(); i++)
    {
        while(stones[i-1] == stones[i] && i < stones.size())
        {
            counter ++;
            i++;
        }
    }
    cout << counter << endl;
    return 0;
}