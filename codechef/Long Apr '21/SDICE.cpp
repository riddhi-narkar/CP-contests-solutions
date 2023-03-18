#include<bits:stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        long long n, base, base_pips, top, top_pips, levels;
        cin >> n;

        int p[] = {20, 36, 51, 60, 76, 88, 99, 104};

        if(n > 8)
        {
            levels = n / 8;
            top = n % 8;

            if(top >= 4)
            {
                base_pips = levels * 88;
                top_pips = p[top-1];
            }   
            
            else
            {
                base_pips = (levels * 88) - 44;
                top_pips = p[top-1+4];
            }

            cout << base_pips + top_pips << endl;
        }

        else
            cout << p[n-1] << endl;
    }
    return 0;
}