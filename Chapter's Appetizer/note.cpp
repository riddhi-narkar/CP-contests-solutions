#include<bits:stdc++.h>
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

        for(int i = l-1; i<=r-1; i++)
        {
            if(ar[i] >= x)
            {
                ans = r-i;
                break;
            }
        }

        cout << ans << endl;
    }
 
    return 0;
}