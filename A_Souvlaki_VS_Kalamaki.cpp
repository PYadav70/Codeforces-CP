#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        vector<int> freq(n+1,0);
        for(int x : arr){
            freq[x]++;
        }
        int pairs = 0;
        for(int v = 0; v<=n; v++ ){
            pairs += freq[v]/2;
             
        }
        int k = (n-1)/2;
       cout << (pairs >= k ? "YES" : "NO") << endl;
    }
    return 0;
}