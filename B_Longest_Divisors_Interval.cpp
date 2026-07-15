#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        long long maxLen = 0;
        for(int i=1;; i++ ){

         if(n%i == 0){
          maxLen++;
        }else{
            break;
        }
        }
        cout << maxLen << endl;
       
    }
    return 0;
}