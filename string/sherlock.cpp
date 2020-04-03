#include<bits/stdc++.h>
using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    map<char,int>m;
    map<int, int>c;

    for(int i = 0; i < s.size(); i++){
        if(m.find(s[i]) == m.end()){
            m[s[i]] = 1;
            c[m[s[i]]]++;
        }else{
            c[m[s[i]]]--;
            if(c[m[s[i]]] == 0){
                c.erase(m[s[i]]);
            }

            m[s[i]]++;
            c[m[s[i]]]++;

        }
    }

    if(c.size() > 2){
        return "NO";
    }

    if(c.size() == 1){
        return "YES";
    }

    int p = -1;
    int q;

    for(auto x: c){
        if(p == -1){
            p = x.first;
            q = x.second;

            if(p == 1 and q == 1){
                return "YES";
            }
        }else{
            if(x.first - p == 1 and x.second == 1){
                return "YES";
            }
        }
    }

    return "NO";
}

int main(){
    string s;

    cin >> s;
    cout << isValid(s) << endl;
    return 0;
}