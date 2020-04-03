#include <bits/stdc++.h>
using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    map<char,int> sa,sb;
    int result = 0;

    for(int i = 0; i < a.size();i++){
        if(sa.find(a[i]) == sa.end()){
            sa[a[i]] = 1;
        }else{
            sa[a[i]]++;
        }
    }

    for(int i = 0; i < b.size();i++){
        if(sb.find(b[i]) == sb.end()){
            sb[b[i]] = 1;
        }else{
            sb[b[i]]++;
        }
    }

    for(auto x: sa){
        if(sb.find(x.first) == sb.end()){
            result += x.second;
        }else{
            if(x.second > sb[x.first]){
                result += (x.second - sb[x.first]);
                x.second -= sb[x.first]; 
            }
        }
    }

    for(auto x: sb){
        if(sa.find(x.first) == sa.end()){
            result += x.second;
        }else{
            if(x.second > sa[x.first]){
                result += (x.second - sa[x.first]);
                x.second -= sa[x.first]; 
            }
        }
    }

    return result;
}

int main(){
    string a, b;

    cin >> a >> b;   
    cout << makeAnagram(a, b) << endl;
    return 0;
}