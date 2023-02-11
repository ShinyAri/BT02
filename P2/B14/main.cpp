#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	double to = -9999999;
	double be = 999999;
	while (t--)
	{
		double n;
		cin >> n;
		if (n > to)to = n;
		if (n < be)be = n;
	}
	cout << to << endl << be;
}
