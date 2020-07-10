//http://codeforces.com/problemset/problem/368/B
#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    set <int> different;
    vector <int> numbers;
    int l;

    cin >> n >> m;

    numbers.resize(n);

    for(int i = 0; i < n; i++)
        cin >> numbers[i];
    
    int counter = 0;
    vector <int> suff_diff(n, 0);
    for(int j = numbers.size()-1; j >= 0; j--)
    {
        if( different.find(numbers[j]) == different.end() ) 
        {
            different.insert(numbers[j]);
            counter += 1;
           
        }
        suff_diff[j] = counter; //size of set different
    }
    for(int j = 0; j < m; j++)
    {
        cin >> l;
        cout << suff_diff[l-1] << endl;
    }

    return 0;
}