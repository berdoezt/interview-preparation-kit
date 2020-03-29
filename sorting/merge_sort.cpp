#include<bits/stdc++.h>
using namespace std;

long count = 0;

void mergeHalves(int temp[], int left, int middle, int right){
    vector<int>arrLeft, arrRight;

    for(int i = left; i < middle + 1; i++){
        arrLeft.push_back(temp[i]);
    }

    for(int i = middle + 1; i <= right; i++){
        arrRight.push_back(temp[i]);
    }

    int i = 0;
    int j = 0;
    int k = left;

    while(i < arrLeft.size() && j < arrRight.size()){
        if(arrLeft[i] <= arrRight[j]){
            temp[k] = arrLeft[i++];
        }else{
            temp[k] = arrRight[j++];
            ::count += (arrLeft.size() - i);
        }

        k++;
    }

    while(i < arrLeft.size()){
        temp[k] = arrLeft[i];
        k++;
        i++;
    }

    while(j < arrRight.size()){
        temp[k] = arrRight[j];
        j++;
        k++;
    }
}

void mergeSort(int temp[], int left, int right){
    if(left >= right){
        return;
    }

    int middle = (left + right) / 2;

    mergeSort(temp, left, middle);
    mergeSort(temp, middle + 1, right);
    mergeHalves(temp, left, middle, right);
}

// Complete the countInversions function below.
long countInversions(vector<int> arr) {
    int temp[arr.size()] = {};

    for(int i = 0; i < arr.size();i++){
        temp[i] = arr[i];
    }

    mergeSort(temp, 0, arr.size() - 1);

    return ::count;
}


int main(){
    int d, n, value;
    vector<int>arr;

    cin >> d;
    while(d--){
        cin >> n;
        while(n--){
            cin >> value;
            arr.push_back(value);
        }

        cout << countInversions(arr) << endl;
        ::count = 0;
    }
    return 0;
}