#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k, x, y;
        cin >> n >> k >> x >> y;

        int flag = k%4;

        if(x == y)
            cout << n << " " << n << endl;

        else if(x < y)
        {
            switch(flag)
            {
                case 1:
                    cout << x+n-y << " " << n << endl;
                    break;

                case 2:
                    cout << n << " " << x+n-y << endl;
                    break;

                case 3:
                    cout << y-x << " " << 0 << endl;
                    break;

                case 0:
                    cout << 0 << " " << y-x << endl;
                    break;
            }
        }

        else
        {
            switch(flag)
            {
                case 1:
                    cout << n << " " << y+n-x << endl;
                    break;

                case 2:
                    cout << y+n-x << " " << n << endl;
                    break;

                case 3:
                    cout << 0 << " " << x-y << endl;
                    break;

                case 0:
                    cout << x-y << " " << 0 << endl;
                    break;

            }
        }
    }

	return 0;
}