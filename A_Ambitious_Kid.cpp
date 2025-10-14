#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long N;
    cin >> N;

    long long arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    long long minOps = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        minOps = min(minOps, abs(arr[i]));
    }
    cout << minOps << endl;
}
