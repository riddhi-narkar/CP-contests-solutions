#include<bits:stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int n;
        cin >> n;

        int g[n];

        for(int i = 0; i<n; i++)
            cin >> g[i];
        
        int rows = *max_element(g, g+n);
        int m[rows][n];

        for(int i = 0; i<rows; i++)
        {
            for(int j = 0; j<n; i++)
            {
                
            }
        }


    }
 
    return 0;
}