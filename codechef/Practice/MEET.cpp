#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n; string p = "";
        getline(cin, p);
        cin >> n;

        string p1 = "";
        p1.push_back(p[0]);
        p1.push_back(p[1]);
        p1.push_back(p[3]);
        p1.push_back(p[4]);

        int m = stoi(p1);
        if(p[6] == 'P' || (p[6] == 'A' && p[0] == '1' && p[1] == '2'))
            m += 1200;

        string a[n];
        for(int i = 0; i<n; i++)
        {
            getline(cin, a[i]);
            string a1, a2;

            a1.push_back(a[i][0]);
            a1.push_back(a[i][1]);
            a1.push_back(a[i][3]);
            a1.push_back(a[i][4]);

            a2.push_back(a[i][9]);
            a2.push_back(a[i][10]);
            a2.push_back(a[i][12]);
            a2.push_back(a[i][13]);

            int t1 = stoi(a1);
            if(a[i][6] == 'P' || (a[i][6] == 'A' && a[i][0] == '1' && a[i][1] == '2'))
                t1 += 1200;

            int t2 = stoi(a2);
            if(a[i][6] == 'P' || (a[i][6] == 'A' && a[i][0] == '1' && a[i][1] == '2'))
                t2 += 1200;

            if(t1 <= m && m <= t2)
                cout<<1;
        }
        cout << endl;
    }
    return 0;
}