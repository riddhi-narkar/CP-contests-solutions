#include<bits:stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int d, c, A = 0, B = 0, ot = 0, ct, flag = 0;
        cin >> d >> c;

        for (int i= 0; i<3; i++)
        { 
            int a;
            cin >> a;
            A += a;
        }

        for (int i= 0; i<3; i++)
        { 
            int b;
            cin >> b;
            B += b;
        }

        ot += A + B + (2*d);

        if(A < 150 && B < 150)
            ct = INT_MAX;
        
        else if((A >= 150 && B < 150) || (B >= 150 && A < 150))
            ct = A + B + d + c;

        else if(A >= 150 && B >= 150)
            ct = A + B + c;

        if(ot > ct)
            cout << "YES" << endl;

        else if(ot <= ct)
            cout << "NO" << endl;
    }
    return 0;
}