#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define rep(i,n,s) for(int i=0;i<n;i+=s)
#define fr(i,n,s) for(int i=1;i<=n;i+=s)
#define nl '\n'
#define dbg(x) cout<<#x<<"->"<<x<<nl;
#define ebg(x,y) cout<<#x<<"->"<<x<<" "<<#y<<"->"<<y<<nl;
#define int long long
#define mod 100000000
#define pi pair<int,int>
#define vi vector<int>
#define vii vector<pi>
#define pb push_back
#define f first
#define s second
using namespace std;
//<-------------------------------CODE------------------------------->
void kmk()
{
	int n, k; cin >> n >> k;
	int h[n];
	for (int &i : h)cin >> i;
	for (int i = 1; i < n; i++)h[i] += h[i - 1];

	// for (int i : h)cout << i << " ";
	// cout << nl;

	int ans = k - 1, i = 0, j = i + k, mind = 0, mval = h[k - 1];

	while (i < (n - k))
	{
		// ebg(h[j] - h[i], mval); dbg(mind);
		if ((h[j] - h[i]) < mval) {
			mval = h[j] - h[i];
			mind = i + 1;
		}
		i++;
		j = i + k;
	}

	cout << ++mind << nl;

}
void s2()
{
	//AYUSH-RAJ's Solution
	int n;
	cin >> n;
	string a;
	cin >> a;
	int k = -1;
	for (int i = 0; i < n; i++) {if (a[i] != '?') {k = i; break;}}
	if (k == -1)
	{
		for (int i = 0; i < n; i++) {
			if (i & 1)cout << 'R';
			else cout << 'B';
		}
		cout << nl;
	}
	else {
		for (int i = 0; i < n; i++)
		{
			if (a[i] == '?')
			{
				if (i - 1 >= 0 && a[i - 1] == 'B')a[i] = 'R';
				else if (i - 1 >= 0 && a[i - 1] == 'R')a[i] = 'B';
			}
		}
		reverse(a.begin(), a.end());

		for (int i = 0; i < n; i++)
		{
			if (a[i] == '?')
			{
				if (i - 1 >= 0 && a[i - 1] == 'B')a[i] = 'R';
				else if (i - 1 >= 0 && a[i - 1] == 'R')a[i] = 'B';
			}
		}
		reverse(a.begin(), a.end());
		cout << a << nl;
	}
}

void solve()
{

	int n, m, q; cin >> n >> m >> q;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	vector<pair<pair<int, int>, int>> v;
	for (int i = 0; i < m; i++)
	{
		int l, r, f;
		cin >> l >> r >> f;
		l--; r--;
		v.pb({{l, r}, f});
		// cout << v[i].first.first << " " << v[i].first.second << " " << v[i].second << nl;
	}

	map<int, int> c;
	// vector<int> c(m + 1);		///STORES OCCURENCE OF EACH OPERATION.
	int jk = m;
	while (q--)
	{
		int l, r; cin >> l >> r;
		l--;
		r--;

		while (l <= r)
		{
			// if (l >= 0 && l < jk)
			c[l]++;
			l++;
		}
	}

	vector<int> df(n + 1);
	for (int i = 0; i < m; i++)
	{
		int cnt = c[i];
		int l = v[i].first.first, r = v[i].first.second, y = v[i].second;

		df[l] += (y * cnt);
		// if (r + 1 < n)		//Optional Bound Check Donno whether its right or not
		df[r + 1] -= (y * cnt);
	}

	for (int i = 1; i <= n; i++)
		df[i] += df[i - 1];


	for (int i = 0; i < n; i++) {
		a[i] += df[i];
		cout << a[i] << " ";
	}

}

int32_t main()
{
	// fastio
	// int t;
	// cin >> t;
	// while (t--)
	{
		kmk();
		// s2();
		// s();
		// solve();
	}
	return 0;
}









