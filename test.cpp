#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t = 0;
	cin >> t;
	while (t > 0)
	{
		int n = 0, k = 0, x = 0;
		int numDigits = 0;
		cin >> n >> k >> x;
		if (x == 1 && k == 1)
		{
			cout << "NO" << endl;
		}
		else if (x != 1)
		{
			cout << "YES" << endl;
			cout << n << endl;
			for (int j = 0; j < n; j++)
			{
				cout << 1 << " ";
			}
			cout << endl;
		}
		else
		{
			vector<int> ans;
			for (int i = k; i > 1; i--)
			{
				if (i > n)
					continue;
				else
				{
					int quotient = n / i;
					n = n % i;
					numDigits += n;
					for (int j = 0; j < quotient; j++)
					{
						ans.push_back(i);
					}
				}
				if (n == 0)
				{
					break;
				}
			}

			if (n == 0)
			{
				cout << "YES" << endl;
				cout << ans.size() << endl;
				for (size_t i = 0; i < ans.size(); i++)
				{
					if (i == ans.size() - 1) cout << ans[i] << endl;
					else cout << ans[i] << " ";
				}
			}
			else
			{
				cout << "NO" << endl;
			}
		}
		t--;
	}
}