#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long a, b, ae, ao, be, bo;
        cin >> a >> b;
        if(a%2 == 0)
            ae = ao = a/2;

        else
        {
            ae = a/2;
            ao = (a/2) + 1;
        }

        if(b%2 == 0)
            be = bo = b/2;

        else
        {
            be = int(b/2);
            bo = (b/2) + 1;
        }

        cout << ((ao*bo) + (be*ae)) << endl;
    }
    return 0;
}