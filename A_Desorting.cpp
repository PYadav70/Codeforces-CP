#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        long long arr[n];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        long long operations = INT_MAX;
        for(int i=0; i<n-1; i++){
            if(arr[i] <= arr[i+1]){
            long long diff = arr[i+1] - arr[i];
            long long req_diff = diff/2+1;
            operations = min(operations, req_diff);
            }else{
                operations = 0;
            }
        }
        cout << operations << endl;
    }
    return 0;
}