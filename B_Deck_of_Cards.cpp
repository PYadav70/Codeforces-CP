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

        string result(n,'+');
        int topRemove = 0 ;
        int bottomRemove = 0;
        int uncertanity = 0;

        for(char ch : s){
            if(ch == '0') {
                topRemove++;
            }else if (ch == '1'){
                bottomRemove++;
            }else{
                uncertanity++;
            }
        }
    
        for (int i = 0; i < topRemove && i < n; i++) result[i] = '-';

     
        for(int i = topRemove; i < topRemove + uncertanity && i < n; i++)
            if(result[i] == '+') result[i] = '?';

        for(int i = n - bottomRemove - uncertanity; i < n - bottomRemove && i >= 0; i++)
            if(result[i] == '+') result[i] = '?';

        
        for(int i = n - bottomRemove; i < n && i >= 0; i++) result[i] = '-';

        cout << result << endl;
    }

    return 0;
}
