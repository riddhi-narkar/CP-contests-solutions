#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;
        int l = s.length();

        if(l%2 == 0)
        {
            int n0 = 0, n1 = 0;

            for(int i = 0; i < l; i++)
            {
                if(s[i] == '0')
                    n0 += 1;

                else 
                    n1 += 1;
            }

            if(n0 == n1)
                cout << 0 << endl;

            else if (n0 == l || n1 == l)
                cout << -1 << endl;
            
            else
            {
                int c = 0;
                while (n0 != n1)
                {
                    c += 1;
                    if(n0 > n1)
                    {
                        n0 -= 1;
                        n1 += 1;
                    }

                    else
                    {
                        n0 += 1;
                        n1 -= 1;
                    }

                }

                cout << c << endl;
            }
        }

        else 
            cout << -1 << endl;
    }
    return 0;
}