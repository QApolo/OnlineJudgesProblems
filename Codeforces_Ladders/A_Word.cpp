#include <bits/stdc++.h>

using namespace std;

int main()
{

    string word;
    int index = 0;
    vector <int> pos_l;
    vector <int> pos_u;

    cin >> word;
    for(char c: word)
    {
        if(c >= 'a' and c <= 'z')
        {
            pos_l.push_back(index);
        }
        else
        {
            pos_u.push_back(index);
        }
        index++;
    }
    if(pos_l.size() >= pos_u.size())
    {
        for(int j = 0; j < pos_u.size(); j++)
        {
            word[pos_u[j]] += 32;
        }
    }
    else
    {
        for(int j = 0; j < pos_l.size(); j++)
        {
            word[pos_l[j]] -= 32;
        } 
    }
    cout << word << endl;

    return 0;
}