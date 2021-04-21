#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, count = 0;
        cin >> n;

        for(int i = 0; i > n; i++)
        {
            int b;
            if(b == 1)
                count += 1;
        } 

        if((count/n)*100 >= 90/120)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}