#include <bits/stdc++.h>
using namespace std;

int median(int fr[201], int d){

    int freq_agg[201] = {0};

    freq_agg[0] = fr[0];

    for(int i = 1; i < 201; i++){
        freq_agg[i] = fr[i] + freq_agg[i - 1];
    }

    // for(int i = 0; i < 10; i++){
    //     cout << i << " "<< freq_agg[i] << endl;
    // }

    int atas = 0;
    int bawah = 0;

    if(d % 2){
        int i = 0;

        while(i < 201){
            if(freq_agg[i] >= (d + 1) / 2){
                atas = i;
                bawah = i;
                break;
            }
            i++;
        }

    }else{
        int i = 0;

        while(i < 201){
            if(freq_agg[i] >= (d / 2)){
                bawah = i;
                break;
            }

            i++;
        }

        while(i < 201){
            if(freq_agg[i] >= (d / 2) + 1){
                atas = i;
                break;
            }

            i++;
        }
    }

    return atas + bawah;
}

int activityNotifications(vector<int> expenditure, int d){
    if(expenditure.size() <= d){
        return 0;
    }

    int freq[201] = {0};

    for(int i = 0; i < d; i++){
        freq[expenditure[i]]++;
    }  

    int result = 0;
    for(int i = d; i < expenditure.size(); i++){

        int m;
        m = median(freq, d);

        // cout << m << " dan " << expenditure[i] << endl;

        if(expenditure[i] >= m){
            result++;
        }

        freq[expenditure[i - d]]--;
        freq[expenditure[i]]++;
    }

    return result;
}

int main(){
    int n, d;
    int val;
    vector<int>exp;

    cin >> n >> d;
    while(n--){
        cin >> val;
        exp.push_back(val);
    }

    cout << activityNotifications(exp, d) << endl;
    return 0;
}

// 2 3 4 6 8     5

// 2 3 4 2 3
// 2 2 3 3 4    6

// 3 4 2 3 6
// 2 3 3 4 6    8

// 4 2 3 6 8   4
// 2 3 4 6 8    4

// int activityNotifications(vector<int> expenditure, int d) {
//     if(expenditure.size() <= d){
//         return 0;
//     }

//     int result = 0;
//     int atas, bawah;

//     if(d % 2){
//         atas = (d + 1) / 2;
//         bawah = atas;
//     }else{
//         atas = d / 2 + 1;
//         bawah = d / 2;
//     }

//     bool first = true;
//     map<int,int>m;
//     for(int i = d; i < expenditure.size(); i++){

//         if(first){
//             first = false;
//             for(int j = i - d; j < i; j++){
//                 if(m.find(expenditure[j]) == m.end()){
//                     m[expenditure[j]] = 1;
//                 }else{
//                     m[expenditure[j]]++;                
//                 }
//             }
//         }else{
//             if(m.find(expenditure[i - 1]) == m.end()){
//                 m[expenditure[i - 1]] = 1;
//             }else{
//                 m[expenditure[i - 1]]++;                
//             }
//         }

//         int temp = 0;
//         int temp_atas = 0;
//         int temp_bawah = 0;

//         for(auto x: m){
//             temp += x.second;
//             if (temp >= bawah){
//                 temp_bawah = x.first;
//             }

//             if (temp >= atas){
//                 temp_atas = x.first;

//                 if(expenditure[i] >= temp_atas + temp_bawah){
//                     result++;
//                     break;
//                 }
//             }
//         }

//         m[expenditure[i - d]]--;
//     }

//     return result;
// }




// 9 5
// 2 3 4 2 3 6 8 4 5

// 2 3 4 2 3
// 2 2 3 3 4           6