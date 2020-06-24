#include <bits/stdc++.h>

using namespace std;

void lowerString(string &data)
{
    std::transform(data.begin(), data.end(), data.begin(),
    [](unsigned char c){ return std::tolower(c); });
}
int main()
{
    string a, b;
    cin >> a >> b;
    lowerString(a);
    lowerString(b);

    if(a < b)
        cout << "-1" << endl;
    else if(a == b)
        cout << "0" << endl;
    else
        cout << "1" << endl;

    

}
