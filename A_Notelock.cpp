#include <bits/stdc++.h>
using namespace std;

int main(){
   
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;

        int last_one = -k; 
        int protected_count = 0;

        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                if(i - last_one >= k){
                    
                    protected_count++;
                    last_one = i;
                } else {
                    last_one = i;
                }
            }
        }

        cout << protected_count << endl;
    }
    return 0;
}
