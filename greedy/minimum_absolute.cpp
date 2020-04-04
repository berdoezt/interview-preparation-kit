#include <bits/stdc++.h>
using namespace std;

// Complete the minimumAbsoluteDifference function below.
int minimumAbsoluteDifference(vector<int> arr) {
    int result;
    bool first = true;
    int temp;

    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size() - 1; i++){
        temp = abs(arr[i] - arr[i + 1]);
        if(first){
            first = false;
            result = temp;
        }else{
            if(temp < result){
                result = temp;
            }
        }
    }

    return result;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr;
    int value;

    while(n--){
        cin >> value;
        arr.push_back(value);
    }

    cout << minimumAbsoluteDifference(arr) << endl;

    return 0;
}