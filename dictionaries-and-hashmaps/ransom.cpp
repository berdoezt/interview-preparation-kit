#include <bits/stdc++.h>

using namespace std;

map<string, int>mm;
int main()
{
	int m, n;
	string s;

	cin >> m >> n;

	for (int i = 0; i < m; ++i)
	{
		cin >> s;

		if(mm.find(s) != mm.end())
		{
			mm.find(s)->second++;
		}
		else
		{
			mm[s] = 1;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cin >> s;
		if(mm.find(s) != mm.end())
		{
			if(mm.find(s)->second)
			{
				mm.find(s)->second--;
			}
			else
			{
				cout << "No" << endl;
				return 0;
			}
		}
		else
		{
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;

	return 0;
}