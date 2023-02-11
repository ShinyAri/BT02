#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int t = n;
	int dem = 0;
	int tam = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= t; j++)
		{
			cout << tam << " ";
			tam++;
		}
		for (int k = 1; k <= dem; k++)
		{
			cout << k << " ";
		}
		cout << endl;
		tam = i + 1;
		dem = i + 0;
		t--;
	}
}
