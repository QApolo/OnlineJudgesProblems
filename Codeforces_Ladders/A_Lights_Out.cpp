#include <bits/stdc++.h>

using namespace std;
int valid(int i, int j)
{
    if(i >= 3 or i < 0 or j >= 3 or j < 0)
        return false;
    return true;
}

int movs[5][2] = {
                    {0, 0},
                    {0,1},
                    {1,0},
                    {-1, 0},
                    {0, -1}
                };
int main()
{

    vector<vector<short>> vals(3, vector<short>(3));
    vector<vector<short>> m(3, vector<short>(3, 1));
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> vals[i][j];
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            while( vals[i][j]-- )
            {
                for(int k = 0; k < 5; k++)//for until 5 since diagonal neighbours are not considered
                {
                    if( valid(i + movs[k][0], j + movs[k][1]) )
                    {
                        m[i + movs[k][0]] [j + movs[k][1]] = (m[i + movs[k][0]][ j + movs[k][1]] + 1) % 2;
                    }
                }
            }
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << m[i][j];
        }
        cout << endl;
    }

    return 0;
}