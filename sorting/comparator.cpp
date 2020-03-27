#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int value;
    string name;
    map<int, vector<string>>m;
    map<int, vector<string>>::reverse_iterator rit;

    cin >> n;
    while(n--)
    {
        cin >> name >> value;
        m[value].push_back(name);
    }

    cout << endl;

    // sort(v.begin(), v.end());
    // reverse(v.begin(), v.end());    

    // for(auto x: m)
    // {
    //     cout << x.first << endl;
    // }

    for(rit = m.rbegin(); rit != m.rend(); rit++)
    {
        for(auto x: rit->second)
            cout << x << " " << rit->first << endl;
    }

    // cout << m[0]->first << endl;

    return 0;
}