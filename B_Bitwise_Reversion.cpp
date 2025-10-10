#include <bits/stdc++.h>
using namespace std;

bool check(int x, int y, int z)
{
    for (int i = 0; i < 31; i++)
    {
        
        int xb = (x >> i) & 1;
        int yb = (y >> i) & 1;
        int zb = (z >> i) & 1;
        bool possible = false;
        for (int a = 0; a <= 1; a++)
        {
            for (int b = 0; b <= 1; b++)
            {
                for (int c = 0; c <= 1; c++)
                {
                    if ((a & b) == xb && (b & c) == yb && (a & c) == zb)
                    {
                        possible = true;
                    }
                }
            }
        }
        if (!possible)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (check(x, y, z))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
