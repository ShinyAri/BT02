#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a;
	cin >> a;
	cout << a << " ";
	cout << fixed << setprecision(2) << (a - 32) * 5 / 9 << " " << (a - 32) * 5 / 9 + 273.15 << endl;
}

