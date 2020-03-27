#include <bits/stdc++.h>
using namespace std;

int N = 10e1 + 2;

int main()
{
	int n;
	int c;
	int arr[N] = {0};

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> c;
		arr[i] = c;
	}

	int sum = 0;
	int x = 0;

	while(1)
	{
		if(x >= n - 1)
			break;

		if(arr[x+2] == 0)
		{
			x+=2;
			sum++;
		}
		else
		{
			x++;
			sum++;
		}
	}

	cout << sum << endl;

	return 0;
}