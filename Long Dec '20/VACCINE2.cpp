#include<bits:stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, d;
        cin >> n >> d;
    
        int a[n], r, rn, count = 0;
        for(int i = 0; i<n; i++)
        {
            cin >> a[i];
        
            if(a[i] >= 80 || a[i] <= 9)
                count += 1;
        }

        if(count%d != 0)
            r = ((count/d) + 1);
        else
            
        

        r = ((count/d) + (count%d));

        if((n-count) <= d)
            rn = 1;

        else
            rn = (((n-count)/d) + ((n-count)%d));

        cout << (r+rn) << endl;
    }
    return 0;
}