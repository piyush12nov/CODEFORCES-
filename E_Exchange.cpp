#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define db double
ll i;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, a, b;
		cin >> n >> a >> b;
		if (a > b) cout << "1" << endl;
		else
		{
			ll tt = ceil((float) n / a);
			cout << tt << endl;
		}
	}

	return 0;
}