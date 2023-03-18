#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n, k, d, count = 0;
        cin >> n >> k >> d;
        
        for(int i = 0; i<n; i++)
        {
            int a;
            cin >> a;
            count += a;
        }
            
        if(count/k <= d)
            cout << count/k << endl;

        else
            cout << d << endl;
        
    }
	return 0;
}