#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

    while(t--){
        int a,b;
        cin >> a >> b;
        int Xk,Yk;
        cin >> Xk >> Yk;
        int Xq,Yq;
        cin >> Xq >> Yq;

        set<pair<int, int>> queen_hits, king_hits;

        for(int j=0; j<4; j++){
            king_hits.insert({Xk + dx[j]*a , Yk + dy[j] *b});
            king_hits.insert({Xk + dx[j]*b , Yk + dy[j] *a});

            queen_hits.insert({Xq + dx[j]*a , Yq + dy[j] *b});
             queen_hits.insert({Xq + dx[j]*b , Yq + dy[j] *a});
        }
        int ans = 0;
        for(auto position : king_hits){
            if (queen_hits.find(position) != queen_hits.end()){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}