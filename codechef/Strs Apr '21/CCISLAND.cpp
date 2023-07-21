#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x, y, xr, yr, d, tx, ty;
        cin >> x >> y >> xr >> yr >> d;

        tx = d*xr;
        ty = d*yr;

        if(tx > x || ty > y)
            cout << "NO" << endl;

        else
            cout << "YES" << endl;
    }

    return 0;
}