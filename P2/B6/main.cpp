#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int k = __gcd(a, b);

	if (a%b == 0) cout << a / b;
	else
	{
		if ((a > 0 && b > 0) || (a < 0 && b < 0)) cout << a / k << "/" << b / k;
		else
		{
			if (k < 0)k = -k;
			if (a < 0)a = -a;
			if (b < 0)b = -b;
			cout << "-" << a / k << "/" << b / k;
		}
	}
}
