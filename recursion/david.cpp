#include<bits/stdc++.h>
using namespace std;

int check[40];

int possibleStep(int n){

    if(n == 0){
        return 1;
    }

    if(n < 0){
        return 0;
    }

    if(check[n] > -1){
        return check[n];
    }

    check[n] = possibleStep(n - 1) + possibleStep(n - 2) + possibleStep(n - 3);

    return check[n];
}

int main(){
    memset(check, -1, sizeof(check));
    check[0] = 1;

    int s;
    cin >> s;

    int n;
    while (s--){
        cin >> n;
        cout << possibleStep(n) << endl;    
    }
    
    return 0;
}