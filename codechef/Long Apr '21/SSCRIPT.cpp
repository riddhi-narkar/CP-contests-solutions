#include<bits:stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int n, k, count = 0;
        cin >> n >> k;

        string s;
        cin >> s;

        for(int i = 0; i<n; i++)
        {
            if(s[i] == '*')
                count += 1;

            else
                count = 0;

            if(count == k)
                break;
        }

        if(count == k)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
 
    return 0;
}