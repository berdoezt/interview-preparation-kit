#include <bits/stdc++.h>

using namespace std;

vector<int>v;

int main()
{
    int n;
    int k;
    int price;
    int temp_price;
    int temp_num;
    int num_toys = 0;

    cin >> n >> k;
    while(n--)
    {
        cin >> price;
        v.push_back(price);
    }

    // bubbleSort();
    sort(v.begin(), v.end());

    temp_price = 0;
    for(int i = 0; i < v.size(); i++)
    {
        temp_price += v[i];
        if(temp_price > k)
            break;
        
        num_toys++;
    }

    cout << num_toys << endl;

    return 0;
}