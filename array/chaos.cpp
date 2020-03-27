#include <bits/stdc++.h>

using namespace std;

int N = 1e5+100;

int main()
{
	int t;
	int ans;
	int value;

	cin >> t;
	while(t--)
	{
		int n;
		int arr[N] = {0};
		bool masuk = false;
		int ans = 0;
		cin >> n;
		for (int i = 1; i <= n; ++i)
		{
			cin >> value;
			arr[i] = value;
		}

		for(int i = 1; i <= n; ++i)
		{
			if(arr[i] - i > 2)
			{
				masuk = true;
				break;
			}
			else
			{
				for (int j = max(1, arr[i] - 2); j < i; ++j)
				{
					if(arr[j] > arr[i])
						ans++;
				}
			}
		}

		if(masuk)
			cout << "Too chaotic" << endl;
		else
			cout << ans << endl;
	}

	return 0;
}