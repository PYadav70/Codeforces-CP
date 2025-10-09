#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        string s;
        cin >> n >> s;

        bool countEmptyCell = false;
        int totalEmptyCell = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == '.' && i+1 < n && s[i+1] == '.' && i+2 < n && s[i+2]== '.'){
                countEmptyCell = true;
                break;  // stop, we found a triple
            }
            if(s[i]== '.'){
                totalEmptyCell++;
            }
        }

        if(countEmptyCell){
            cout << 2 << endl;
        } else {
            cout << totalEmptyCell << endl;
        }
    }

    return 0; // move return 0 outside while loop
}
