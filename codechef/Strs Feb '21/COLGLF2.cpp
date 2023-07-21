#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int s;
        long long int tt = 0;
        cin >> s;
        int q[s];

        for(int i = 0; i<s; i++)
            cin >> q[i];

        for(int i = 0; i<s; i++)
        {
            int e;
            long long int ls = 0, st;
            cin >> e;
            for(int i = 0; i<e; i++)
            {
                int l;
                cin >> l;
                ls += l;
                cout << "ls is " << ls << endl;
            }

            if(e == 1)
                st = ls;
            else
                st = ls - ((e-1)*q[i]);
            cout << "st is " << st << endl;
            tt += st;
            cout << "tt is " << tt << endl;
        }

        cout << tt << endl;
    }
    return 0;
}

// 2
// 1
// 10
// 5 11 11 11 11 11
// 5
// 10 10 10 10 10
// 1 11
// 1 11
// 1 11
// 1 11
// 1 11