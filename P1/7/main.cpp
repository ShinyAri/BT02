#include <bits/stdc++.h>

using namespace std;

int main()
{
	int k = 1;
	int n;
	int cu = 0;
	while (k)
	{
		cin >> n;
		if (cu == n) continue;
		else cout << n << " ";
		cu = n;
		if (n < 0) k = 0;
	}
}
