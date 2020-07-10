//https://codeforces.com/contest/186/problem/A
#include <bits/stdc++.h>

using namespace std;



int main()
{
    string a, b;

    cin >> a;
    cin >> b;

    vector <char> wrong_a, wrong_b;

    int len = min(a.length(), b.length());
    bool same = a.length() == b.length();
    for(int i = 0; i < len; i++) {
        if(a[i] != b[i])
        {
            wrong_a.push_back(a[i]);
            wrong_b.push_back(b[i]);
        }
    }
    if(wrong_a.size() != 2)
        same = false;
    else {

        sort(wrong_a.begin(), wrong_a.end());
        sort(wrong_b.begin(), wrong_b.end());
        for(int j = 0; j < 2; j++)
        {
            if(wrong_a[j] != wrong_b[j]) {
                same = false;
                break;
            }
        }
    }
    if(same)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    

    return 0;
}