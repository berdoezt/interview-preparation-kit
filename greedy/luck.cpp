#include<bits/stdc++.h>
using namespace std;

// Complete the luckBalance function below.
int luckBalance(int k, vector<vector<int>> contests) {

    sort(contests.begin(), contests.end());


    int result = 0;
    int count = 0;

    for(int i = contests.size() - 1; i >= 0; i--){
        if(contests[i][1] == 0){
            result += contests[i][0];
        }else{
            if(k > 0){
                result += contests[i][0];
                k--;
            }else{
                result -= contests[i][0];
            }
        }
    }


    return result;
}

int main(){
    int n, k;
    int l, t;
    vector<vector<int>>contests;

    cin >> n >> k;
    while(n--){
        vector<int>temp;
        cin >> l >> t;

        temp.push_back(l);
        temp.push_back(t);

        contests.push_back(temp);
    }

    cout << luckBalance(k, contests) << endl;
    return 0;
}