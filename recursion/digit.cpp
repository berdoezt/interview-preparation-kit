#include<bits/stdc++.h>
using namespace std;

long long int super(long int n){
    if(n / 10 == 0){
        return n;
    }

    return super((n % 10) + (n / 10));
}

int main(){
    string n;
    int k;

    cin >> n >> k;
    long long int temp = 0;

    for(auto x: n){
        temp += x - '0';
    }

    temp *= k;

    cout << super(temp) << endl;
    return 0;
}