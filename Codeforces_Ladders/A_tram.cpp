//https://codeforces.com/problemset/problem/116/A

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int out, in;
    int s = 0;
    int answer = 0;
    while(n--)
    {
        cin >> out >> in;
        s += (in-out);
        answer = max(answer, s);
    }
    cout << answer << endl;
    return 0;
}