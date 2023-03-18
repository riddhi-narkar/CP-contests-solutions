#include<bits:stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;

    while(t--)
    {
        int n, h, x, flag = 0;
        cin >> n >> h >> x;
        int t[n];

        for(int i = 0; i<n; i++)
        {
            cin >> t[i];
            if(x + t[i] >= h)
            {
                flag = 1;
                cout << "YES" << endl;
                break;
            } 
        }

        if(flag == 0)
            cout << "NO" << endl;

    }
    return 0;
}