#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        int n;
        cin >> n;
        cin >> s;

        for(int i = 0; i < n; i += 4)
        {
            int b, e;

            if(s[i] == '0')
            {
                b = 1;
                e = 8;
            }

            else
            {
                b = 9;
                e = 16;
            }

            if(s[i+1] == '0')
                e -= 4;

            else
                b += 4;

            if(s[i+2] == '0')
                e -= 2;

            else
                b += 2;

            if(s[i+3] == '0')
                e -= 1;

            else
                b += 1;

            switch(b)
            {
                case 1:
                cout << "a";
                break;

                case 2:
                cout << "b";
                break;

                case 3:
                cout << "c";
                break;

                case 4:
                cout << "d";
                break;

                case 5:
                cout << "e";
                break;

                case 6:
                cout << "f";
                break;

                case 7:
                cout << "g";
                break;

                case 8:
                cout << "h";
                break;

                case 9:
                cout << "i";
                break;

                case 10:
                cout << "j";
                break;

                case 11:
                cout << "k";
                break;

                case 12:
                cout << "l";
                break;

                case 13:
                cout << "m";
                break;

                case 14:
                cout << "n";
                break;

                case 15:
                cout << "o";
                break;

                case 16:
                cout << "p";
                break;
            }

        }
        cout << endl;
    }

	return 0;
}
