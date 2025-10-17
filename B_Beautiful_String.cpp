#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        if(isPalindrome(s)){
            cout << 0 << endl;
            continue;
        }
         
        string p = "";
        for(char ch : s){
            if(s[ch] == '0' && s[ch] == '1' )
        }
     
          
    }
}