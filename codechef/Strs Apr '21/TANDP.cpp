#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m, x, y, a, b;
        cin >> n >> m >> x >> y >> a >> b;

        int dt, dp;
        dt = (n-x)+(m-y);
        dp = (n-a) + (m - (b + (n-a)));

        if(dp >= dt)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}