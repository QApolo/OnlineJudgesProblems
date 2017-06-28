#include <bits/stdc++.h>

using namespace std;

#define PI  3.141592653589793
int main()
{
	
	double a;
	while(cin >> a)
	{
		a = a*a*(6-PI)/9;
		printf("%.4lf\n", a);
	}

	return 0;
}