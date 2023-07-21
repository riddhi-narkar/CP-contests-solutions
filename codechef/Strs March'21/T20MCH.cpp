#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    //cin >> t;

    while(t--)
    {
        int r, o, c;
        cin >> r >> o >> c;

        int overs = 20 - o;

        if((overs*36) + c > r)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}