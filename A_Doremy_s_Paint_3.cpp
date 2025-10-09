#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
            
        }
        sort(arr.begin(), arr.end());
            int mini = arr[0];
            int maxi = arr[n-1];

            if(mini == maxi){
                cout << "Yes" << endl;
                continue;
            }
            //find the count
            int countMin = count(arr.begin(), arr.end(), mini);
            int countMax  = count(arr.begin(), arr.end(), maxi);

           if(countMin + countMax == n && abs(countMin - countMax) <= 1){
              cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
    }
    return 0;
    
}