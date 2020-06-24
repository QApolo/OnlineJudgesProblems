//https://codeforces.com/problemset/problem/133/A
#include <bits/stdc++.h>

using namespace std;

int main()
{


    string s;
    string reserved  = "HQ9";

    cin >> s;
    string output = "NO";
    for(char c: reserved)
    {
        if(s.find(c) != std::string::npos)
        {
            output = "YES";
            break;
        }
    }
    cout << output << endl;

    return 0;
}