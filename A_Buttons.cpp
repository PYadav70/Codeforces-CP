// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     while(t--){
//         long long a,b,c;
//         cin >> a >> b >> c;

//        long long  sum = a+b+c;
//        if(sum % 2 != 0){
//         cout << "First" << endl;
//        }else{
//         cout << "Second" << endl;
//        }
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        if(a > b) {
            cout << "First" << endl;  // Anna wins
        } else if(b > a) {
            cout << "Second" << endl; // Katie wins
        } else { // a == b
            if(c % 2 == 1) cout << "First" << endl;
            else cout << "Second" << endl;
        }
    }

    return 0;
}
