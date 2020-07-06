//http://codeforces.com/problemset/problem/450/A
#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    int c;
    queue <pair<int,int>> children;

    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> c;
        children.push({c, i+1});
    }

    while( children.size() > 1 )
    {
        int position = children.front().second;
        int current = children.front().first;
        children.pop();
        if(current > m)
            children.push({current - m, position});
    }
    cout << children.front().second << '\n';

    return 0;
}