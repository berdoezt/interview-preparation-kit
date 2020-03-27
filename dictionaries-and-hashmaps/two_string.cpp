#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;

	cin >> t;
	while(t--)
	{
		string s1;
		string s2;

		string temp_s1;

		cin >> s1 >> s2;

		bool ketemu = false;
		for(int i = 0; i < s1.size(); i++)
		{
			temp_s1 = s1[i];
			if(s2.find(temp_s1) != string::npos)
			{
				cout << "YES" << endl;
				ketemu = true;
				break;
			}
		}

		if(ketemu)
			continue;
		else
			cout << "NO" << endl;
	}
	return 0;
}