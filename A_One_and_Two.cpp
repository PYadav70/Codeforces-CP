#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int totalTwo = 0;
        int currentTwo = 0;

        for(int i=0; i<n; i++){
            if(arr[i] == 2){
                totalTwo++;
            }
        }
        int ans = -1;

        for(int i=0; i<n; i++){
            if(arr[i] == 2){
                currentTwo++;
            }
            if((currentTwo) == (totalTwo - currentTwo)){
                ans = i+1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}