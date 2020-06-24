//http://codeforces.com/problemset/problem/165/A

//check for a better solution
#include <bits/stdc++.h>

using namespace std;

bool valid(int x, int y) 
{
    if(x < 0 or x >= 2002 or y < 0 or y >= 2002)
        return false;
    return true;
}
int countNeigh(int x, int y, int dirX, int dirY, vector <vector <int>> &grid)
{
    int ans = 0;
    while(valid(x, y))
    {
        ans += grid[x][y];
        x += dirX;
        y += dirY;
    }
    return ans;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    int x, y;
    vector <pair<int, int>> points;
    
    vector <vector <int>> grid(2005, vector<int>(2005, 0));
    cin >> n;
    while(n--)
    {
        cin >> x >> y;
        points.push_back({x+1000, y+1000});
        grid[x+1000][y+1000] = 1;
    }

    int counter = 0;
    for(auto p: points)
    {
        int up = countNeigh(p.first, p.second, 0,-1, grid);
        int down = countNeigh(p.first, p.second, 0, 1, grid);
        int left = countNeigh(p.first, p.second, -1, 0, grid);
        int right = countNeigh(p.first, p.second, 1, 0, grid);
        //cout << p.first << " " << p.second << " :" << up << " " << down << " " << left << " " << right << endl;
        if(up > 1 && down > 1 && left > 1 && right > 1)
            counter++;
    }
    cout << counter << '\n';

    return 0;
}

