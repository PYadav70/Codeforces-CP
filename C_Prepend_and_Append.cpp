#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        string s;
        cin >> s;

        long long removedPairs = 0;
        long long left = 0;
        long long right = n-1;

        while(left <= right && s[left] != s[right]){
                removedPairs++;
                left++;
                right--;
                
            }
            long long ans = n-2*removedPairs;
        
        cout << ans << endl;
    }
    return 0;
}