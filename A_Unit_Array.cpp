#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        long long arr[n];

        for(int i=0 ; i<n; i++){
            cin >> arr[i];
        }

        long long positive = 0;
        long long negative = 0;

        for(long long i=0; i<n; i++){
            if(arr[i] == 1){
                positive++;
            }else {
                negative++;
            }
        }
        
        long long operations = 0;

        while(positive < negative || negative % 2 == 1){
            operations++;
            positive++;
            negative--;

        }

        cout << operations << endl;

        }
        return 0;
    }
