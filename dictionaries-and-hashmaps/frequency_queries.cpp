#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	int n;
	int q;
	int value;
	map<int, int>m;
	map<int, int>m2;

	cin >> n;
	while(n--)
	{
		cin >> q;
		cin >> value;

		if(q == 1)
		{
			if(m[value] > 0)
				m2[m[value]]--;

			m[value]++;
			m2[m[value]]++;
		}
		else if(q == 2)
		{
			if(m[value] > 0)
			{
				m2[m[value]]--;
				m[value]--;
				m2[m[value]]++;
			}
		}
		else if(q == 3)
		{
			if(m2[value] > 0)
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
	}

	return 0;
}