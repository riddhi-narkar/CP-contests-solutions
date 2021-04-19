#include<bits:stdc++.h>
using namespace std;
 
int main()
{
    long long int t;
    cin >> t;
 
    while(t--)
    {
        long long int n, m, start = 1, flag = 0;
        cin >> n >> m;

        long long int a[n];

        for(long long int i = 0; i<n; i++)
            cin >> a[i];

        sort(a, a+n);

        if(a[0] != start)
            flag = 1;

        else
        {
            for(long long int i = 0; i<n; i++)
            {
                if(a[i] == start+1)
                    start += 1;
                
                else if(a[i] == start)
                    continue;
                
                else
                {
                    flag = 1;
                    break;
                }     
            }

            if(a[n-1] != m)
                flag = 1;
        }

        if(flag == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}