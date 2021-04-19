#include<bits:stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        double k1, k2, k3, v, i = 0;
        cin >> k1 >> k2 >> k3 >> v;

        double ans = 100/(k1*k2*k3*v);
        ans = floor((ans*100) + 0.5) / 100;

        if(ans < 9.58)
            cout << "YES" << endl;
        
        else
            cout << "NO" << endl;

        // string s = to_string(ans);

        // for(int i; i<s.length(); i++)
        //     if(s[i] == '.')
        //         break;

        // if(int(s[0]) <= 57 && s[1] == '.')
        // {
        //     if(int(s[2]) <= 53 && int(s[3]) < 56)
        //         cout << "YES" << endl;

        //     else
        //         cout << "NO" << endl;
        // }

        // else
        //     cout << "NO" << endl;

    }
 
    return 0;
}