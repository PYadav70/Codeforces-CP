#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        long long arr[n];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        long long blank_space = 0;
        long long max_length = 0; 

        for(int i=0; i<n; i++){
            if(arr[i] == 0){
                blank_space++;  
            }else{
                blank_space = 0;
            }
          max_length = max(max_length, blank_space);
        }
        cout << max_length << endl;
        
    }
    return 0;
}