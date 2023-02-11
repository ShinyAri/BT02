#include <bits/stdc++.h>

#define pb push_back
#define pp pop_back
#define f first
#define s second
#define mp make_pair
#define sz(a) int((a).size())
#ifdef _WIN32
#  define I64 "%I64d"
#else
#  define I64 "%lld"
#endif
#define fname "."

typedef long long ll;
typedef unsigned long long ull;

const int MAX_N = (int)1e5 + 123;
const double eps = 1e-6;
const int inf = (int)1e9 + 123;

using namespace std;

string s;
ll ans;

ll slow() {
	set < string > q;
	for (int i = 0; i < sz(s); i++)
		for (int j = i + 1; j < sz(s); j++) {
			string nw = "";
			for (int k = 0; k < sz(s); k++)
				if (k != i && k != j)
					nw += s[k];
			q.insert(nw);
		}
	return sz(q);
}

int main() {
#ifdef Nick
	freopen(fname"in", "r", stdin);
	freopen(fname"out", "w", stdout);
#endif
	cin >> s;
	for (int i = 1, len = 1, cnt = 1; i <= sz(s); i++) {
		if (i == sz(s) || s[i] != s[i - 1]) {
			ans += (cnt - 1) + (len > 1);
			len = 1;
			cnt++;
		}
		else
			len++;
	}
	for (int i = 0; i + 1 < sz(s); ) {
		if (s[i] == s[i + 1]) {
			i++;
			continue;
		}
		int len = 2;
		while (i + len < sz(s) && s[i + len] == s[i + (len % 2)])
			len++;
		ans -= (len - 2);
		i += len - 1;
	}
	cout << ans;
	return 0;
}
