#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<long long int>v;
	map<long long int, long long int>m1;
	map<long long int, long long int>m2;
	long long int value;
	long long int n;
	long long int r;
	long long int hasil;

	cin >> n;
	cin >> r;

	hasil = 0;
	for (long long int i = 0; i < n; ++i)
	{
		cin >> value;
		if(m2.find(value) != m2.end())
		{
			hasil += m2[value];
		}

		if(m1.find(value) != m1.end())
		{
			m2[value * r] += m1[value];
		}

		m1[value * r]++;
	}

	cout << hasil << endl;
	
	return 0;
}