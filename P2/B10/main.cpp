#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a, b, k;
	cin >> a >> b >> k;
	while (a <= b)
	{
		cout << fixed << setprecision(2) << a << " " << (a - 32) * 5 / 9 << " " << (a - 32) * 5 / 9 + 273.15 << endl;
		a += k;
	}
}
