#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	int valley = 0;
	int h = 0;
	int now;

	string s;

	cin >> n;
	cin >> s;

	for (int i = 0; i < s.size(); ++i)
	{
		now = h;
		if(s[i] == 'U')
		{
			h++;
		}
		else
		{
			h--;
			if(now == 0 && h < 0)
				valley++;
		}
	}

	cout << valley << endl;

	return 0;
}