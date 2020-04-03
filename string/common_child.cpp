#include<bits/stdc++.h>
using namespace std;

int dp[5003][5003];

// Complete the commonChild function below.
int commonChild(string s1, string s2) {
    int n = s1.size();

    for(int i = 0; i < n + 1 ; i++){
        dp[i][0] = 0;
        dp[0][i] = 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(s1[i] == s2[j]){
                dp[i + 1][j + 1] = dp[i][j] + 1;
            }else{
                dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
            }
        }
    }

    return dp[n][n];
}

int main(){
    string s1, s2;

    cin >> s1 >> s2;
    cout << commonChild(s1, s2) << endl;
    return 0;
}