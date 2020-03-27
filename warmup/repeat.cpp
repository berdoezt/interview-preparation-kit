#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	long long int n;
	long long int jum_a = 0;

	cin >> s;
	cin >> n;

	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == 'a')
			jum_a++;
	}

	long long int hasil;
	long long int e = n % s.size();
	long long int jum_aa = 0;

	for (int i = 0; i < e; ++i)
	{
		if(s[i] == 'a')
			jum_aa++;	
	}

	hasil = (n / s.size()) * jum_a + jum_aa;

	cout << hasil << endl;

	return 0;
}