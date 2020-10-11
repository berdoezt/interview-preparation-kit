#include<bits/stdc++.h>
using namespace std;

void foo(){
    string s;
    cin >> s;

    vector<char>v;
    for(auto x:s){
        if(x == '{' || x == '[' || x == '(' || v.size() == 0){
            v.push_back(x);
        }else{
            if(x == '}'){
                if(v[v.size() - 1] == '{'){
                    v.erase(v.begin() + v.size() - 1);
                }else{
                    v.push_back(x);
                }
            }

            if(x == ']'){
                if(v[v.size() - 1] == '['){
                    v.erase(v.begin() + v.size() - 1);
                }else{
                    v.push_back(x);
                }
            }

            if(x == ')'){
                if(v[v.size() - 1] == '('){
                    v.erase(v.begin() + v.size() - 1);
                }else{
                    v.push_back(x);
                }
            }
        }
    }

    if(v.size() > 0){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        foo();
    }
    return 0;
}