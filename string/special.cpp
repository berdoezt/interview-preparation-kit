#include<bits/stdc++.h>
using namespace std;

// Complete the substrCount function below.
long substrCount(int n, string s) {
    long result = n;
    char c;
    int indexO;
    int batas;

    for(int i = 0; i < n - 1; i++){
        c = s[i];
        indexO = -1;

        for(int j = i + 1; j < n; j++){
            if(s[j] == c){
                if (indexO == -1){
                    result++;
                }else{
                    if(j - i == batas){
                        result++;
                        break;
                    }
                }
            }else{
                if(indexO != -1){
                    break;
                }else{
                    indexO = j - i;
                    batas = indexO * 2;
                }
            }
        }
    }

    return result;
}

int main(){
    int n;
    string s;

    cin >> n;
    cin >> s;

    cout << substrCount(n, s) << endl;
    return 0;
}