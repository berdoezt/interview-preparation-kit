#include<bits/stdc++.h>
using namespace std;

// Complete the getMinimumCost function below.
int getMinimumCost(int k, vector<int> c) {
    sort(c.begin(), c.end());

    int result = 0;
    int mul = 1;
    int j = k;

    for(int i = c.size() - 1; i >= 0; i--){
        if(j == 0){
            j = k;
            mul++;
        }

        if(j > 0){
            result += c[i] * mul;
            j--;
        }
    }

    return result;
}

int main(){
    int n, k;
    int value;
    vector<int>c;

    cin >> n >> k;
    while(n--){
        cin >> value;
        c.push_back(value);
    }

    cout << getMinimumCost(k, c) << endl;

    return 0;
}