#include <bits/stdc++.h>

using namespace std;

int main()
{
	int d;
	int n;
	int value;
	vector<int> v;

	cin >> n >> d;
	for (int i = 0; i < n; ++i)
	{
		cin >> value;
		v.push_back(value);
	}

	for (int i = 0; i < n; ++i)
	{
		if(i == n - 1)
			cout << v[(i+d) % n] << endl;
		else
			cout << v[(i+d) % n] << " ";
	}

	return 0;
}