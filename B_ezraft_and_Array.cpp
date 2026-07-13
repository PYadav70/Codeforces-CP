#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        if(n== 1){
            cout << 1 << "\n";
        }else if(n == 2){
            cout << -1 << endl;
        }else{
          vector<long long>ans = {1,2,3};
          long long sum = 6;

          while(ans.size() < n){
            ans.push_back(sum);
            sum *= 2;
          }

          for(long long x : ans){
            cout << x << " ";
          }
          cout << "\n";
         
        }
       
    }
     return 0;
}