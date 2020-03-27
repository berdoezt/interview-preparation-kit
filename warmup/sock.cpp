#include <bits/stdc++.h>

using namespace std;

int N = 10e1 + 2;

int main()
{
	int n;
	int s;
	int arr[N] = {0};
	int count = 0;

	cin >> n;
	while(n--)
	{
		cin >> s;
		arr[s]++;
	}

	for(int i = 0; i < N; i++)
	{
		if(arr[i])
		{
			count += arr[i] / 2;
		}
	}

	cout << count << endl;

	return 0;
}