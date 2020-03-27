#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<vector<int>> v;
	int value;
	int total = -64;
	int temp_total;

	for (int i = 0; i < 6; ++i)
	{
		vector<int> vv;
		for (int j = 0; j < 6; ++j)
		{
			cin >> value;
			vv.push_back(value);		
		}

		v.push_back(vv);
	}

	for (int i = 1; i < v.size() - 1; ++i)
	{
		for(int j = 1; j < v[i].size() - 1; ++j)
		{
			temp_total = v[i][j] + v[i-1][j-1] + v[i-1][j] + v[i-1][j+1] + v[i+1][j-1]+ v[i+1][j]+ v[i+1][j+1];
			if(temp_total >= total)
				total = temp_total;
		}
	}

	cout << total << endl;
	return 0;
}