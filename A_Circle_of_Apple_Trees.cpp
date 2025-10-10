#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int maxAppleEat = 1;

        for (int start = 0; start < n; start++)
        {
            int eaten = 1;
            int lastBeauty = arr[start];

            for (int step = 1; step < n * n; step++)
            {
                int nextTree = (start + step) % n;
                if (arr[nextTree] > lastBeauty)
                {
                    eaten++;
                    lastBeauty = arr[nextTree];
                }
            }
            maxAppleEat = max(maxAppleEat, eaten);
        }
        cout << maxAppleEat << endl;
    }
    return 0;
}