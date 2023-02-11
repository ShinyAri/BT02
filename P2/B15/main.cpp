#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll fibo(ll n)
{
	if (n == 0 || n == 1) return 1;
	return fibo(n - 1) + fibo(n - 2);
}

int main()
{
	ll n;
	cin >> n;
	int k = 0;
	for (int i = 0; i <= 30; i++)
	{
		if (fibo(i) == n)
		{
			k = 1;
			break;
		}
	}
	if (k) cout << "Thuoc day Fibonacci" << endl;
	else cout << "Khong thuoc day Fibonacci" << endl;
	for (int i = 0; i < 30; i++)
	{
		if (fibo(i) <= n) cout << fibo(i) << " ";
	}
}
