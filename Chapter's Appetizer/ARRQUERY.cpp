#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int ar[n];

    for(int i = 0; i<n; i++)
        cin >> ar[i];

    while(q--)
    {
        int l, r, x, ans = 0;
        cin >> l >> r >> x;

        int mid = (r-l+1)/2;

        if(ar[mid-1] == x)
        {
            for(int i = mid-2; i>=0; i--)
            {
                if(ar[i] < x)
                    ans = r-(i+1);

            }
        }


        else if(ar[mid-1] > x)
        {
            for(int i = l-1; i<=mid-1; i++)
            {
                if(ar[i] >= x)
                {
                    ans = r-i;
                    break;
                }
            }
        }

        else
        {
            for(int i = mid; i<=r-1; i++)
            {
                if(ar[i] >= x)
                {
                    ans = r-i;
                    break;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}