#include<bits/stdc++.h>
using namespace std;

// void operation(vector<int>&arr, int l, int r){
//     int x = 0;

//     for(int i = 1; i<=r ; i++){
//         x ^= arr[i];
//     }

//     for(int i=1; i<=r; i++){
//          arr[i] = x;
//     }
// }

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        vector<int>arr(n);
        bool allZero = true;

        for(int i = 0 ; i<n; i++){
            cin >> arr[i];
            if(arr[i] != 0){
                allZero = false;
            }
            if(allZero){
                cout << 0 << "\n";
                continue;
            }
        }

      if(n%2 == 0){
        cout << 2 << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n << endl;
      }else{
        cout << 4 << endl;
        cout << 1 << " " << n-1 << endl;
        cout << 1 << " " << n-1 << endl;
        cout << n-1 << " " << n << endl;
        cout << n-1 << " " << n << endl;
        }  
    }
    return 0;
}