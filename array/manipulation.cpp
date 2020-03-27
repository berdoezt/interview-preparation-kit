#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n, m;
	long long int max = 0;
	long long int a, b, k;

	cin >> n >> m;
	long int *arr=new long int[n+1]();

	while(m--)
	{
		cin >> a >> b >> k;
		arr[a] += k;
		if(b + 1 <= n)
			arr[b + 1] -= k;
	}

	long int x = 0;
	for (long int i = 1; i <= n; ++i)
	{
		x += arr[i];
		if(x >= max)
			max = x;
	}

	cout << max << endl;

	return 0;
}