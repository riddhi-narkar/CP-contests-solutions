#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, d, pos, flag;
        cin >> n >> d;
        int a[n];

        for(int i=0; i<n; i++) 
        {
            
        }
            cin >> a[i]; 

        sort(a, a+n);

        for(int i=0; i<n; i++)
        {
            if(a[i] > d)
            {
                pos = i;
                break;
            }
        }

        int index = 1;
        for(int i=pos; i<n; i++)
        {
            if(a[index]+a[0] <=d)
                a[i] = a[index]+a[0];

            else
                flag = 1;

            index += 1;
        }
    }

    return 0;
}

// 3
// 5 3
// 2 3 2 5 4
// 3 4
// 2 4 4
// 5 4
// 2 1 5 3 6