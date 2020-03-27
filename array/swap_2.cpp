#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	int value;

	cin >> n;
	int arr[n + 5];

	for(int i = 1; i <= n; i++)
	{
		cin >> value;
		arr[i] = value;
	}

	int ans = 0;
	for(int i = 1; i <= n; i++)
	{
		if(i == arr[i])
			continue;

		swap(arr[i], arr[arr[i]]);

		if(i != arr[i])
			i--;

		ans++;
	}

	cout << ans << endl;

	return 0;
}