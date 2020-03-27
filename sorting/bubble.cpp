#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int value;
    int num_swap = 0;
    vector<int>v;

    cin >> n;
    while(n--)
    {
        cin >> value;
        v.push_back(value);
    }

    for(int i = 0; i < v.size(); i++)
    {
        for(int j = 0; j < v.size() - 1; j++)
        {
            if(v[j] > v[j + 1])
            {
                num_swap++;
                swap(v[j], v[j + 1]);
            }
        }
    }

    printf("Array is sorted in %d swaps.\n", num_swap);
    printf("First Element: %d\n", v[0]);
    printf("Last Element: %d\n", v[v.size() - 1]);

    return 0;
}