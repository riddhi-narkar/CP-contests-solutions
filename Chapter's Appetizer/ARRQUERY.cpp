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


        while (l <= r) 
        {
            int m = (1 + r - l)/ 2;

            if (ar[m] == x)
            {
                ans = r-m+1;
                break;
            }

            else if (ar[m] > x)
            {
                if(ar[m-1] < x)
                {
                    ans = r-m+1;
                    break;
                }

                else
                    r = m - 1;
            }
                

            else
                l = m + 1;
        }
    
        cout << ans << endl;
    }
 
    return 0;
}