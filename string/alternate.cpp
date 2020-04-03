#include<bits/stdc++.h>
using namespace std;

// Complete the alternatingCharacters function below.
int alternatingCharacters(string s) {
    int result = 0;
    char current;

    current = s[0];
    for(int i = 1; i < s.size(); i++){
        if(s[i] == current){
            result++;
        }
        current = s[i];
    }

    return result;
}

int main(){

    int n;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        cout << alternatingCharacters(s) << endl;
    }

    return 0;
}