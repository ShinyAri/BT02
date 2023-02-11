#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b <= c || b + c <= a || c + a <= b)
	{
		cout << "Invalid";
	}
	else
	{
		cout << a + b + c << endl;
		if (a == b && b == c)
		{
			cout << "deu";
		}
		else if (a*a + b * b == c * c || a * a == b * b + c * c || b * b == a * a + c * c)
		{
			cout << "vuong";
		}
		else if (a == b || b == c || c == a)
		{
			cout << "can";
		}
		else cout << "thuong";
	}
}
