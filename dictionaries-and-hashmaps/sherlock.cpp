#include <bits/stdc++.h>

using namespace std;

int sherlock(string s)
{
	int hasil = 0;
	int x;
	int size = s.size();
	string temp;
	string temp_2;
	map<string, int> m;

	for (int x = 1; x <= size; ++x)
	{
		for (int i = 0; i < size - 1; ++i)
		{
			temp = s.substr(i, x);
			sort(temp.begin(), temp.end());

			if(m.find(temp) == m.end())
			{
				m[temp] = 0;
			}

			for(int j = i + 1; j < size;j++)
			{
				temp_2 = s.substr(j, x);
				sort(temp_2.begin(), temp_2.end());

				if(temp_2 == temp)
				{
					m.find(temp_2)->second++;
				}
			}
		}
	}

	for(auto x: m)
	{
		hasil += x.second;
	}

	return hasil;
}

int main()
{
	int q;
	string s;

	cin >> q;
	while(q--)
	{
		cin >> s;
		cout << sherlock(s) << endl;	
	}

	return 0;
}