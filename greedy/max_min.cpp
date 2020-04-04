#include<bits/stdc++.h>
using namespace std;

// Complete the maxMin function below.
int maxMin(int k, vector<int> arr) {
    sort(arr.begin(), arr.end());
    
    int result;
    bool first = true;
    int temp;

    for(int i = k - 1; i < arr.size(); i++){
        temp = arr[i] - arr[i - k + 1];
    
        if (first){
            first = false;
            result = temp;
        }else{
            if (temp < result){
                result = temp;
            }
        }
    }

    return result;
}

int main(){
    int n, k;
    vector<int>arr;
    int value;

    cin >> n >> k;
    while(n--){
        cin >> value;
        arr.push_back(value);
    }

    cout << maxMin(k, arr) << endl; 
    return 0;
}