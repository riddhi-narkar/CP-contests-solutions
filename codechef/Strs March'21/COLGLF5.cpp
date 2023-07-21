#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m, ans = 0, sport = 0;  // 0 = cricket, 1 = football
        bool run = true;
        cin >> n >> m;

        int f[n], c[m];

        for(int i = 0; i<n; i++)
            cin >> f[i];

        for(int i = 0; i<m; i++)
            cin >> c[i];

        int fi = 0, ci = 0;

        int compare = c[ci];
        ans += 1;

        while(run)
        {
            int flag = 0;

            if(sport == 0)
            {
                for(int i = fi; i<n; i++)
                    if(f[i] > compare)
                    {
                        fi = i;
                        compare = f[i];
                        sport = 1;
                        ans += 1;

                        flag = 1;
                        break;
                    }
            }

            else
            {
                for(int i = ci; i<m; i++)
                {
                    if(c[i] > compare)
                    {
                        ci = i;
                        compare = c[i];
                        sport = 0;
                        ans += 1;

                        flag = 1;
                        break;
                    }

                }
            }

            if(flag == 0)
                run = false;
        }

        cout << ans << endl;
    }
    return 0;
}