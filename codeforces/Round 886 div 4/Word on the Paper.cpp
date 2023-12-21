#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        char in;

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> in;

                if(int(in) == 46)
                    continue;

                else
                    cout << in;
            }
        }

        cout << endl;
    }

    return 0;
}