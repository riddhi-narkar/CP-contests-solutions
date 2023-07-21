#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n, x, total_cost;
        cin >> n >> x;
        
        total_cost = n*x;
        
        if(total_cost > 9999 && total_cost <= 99999)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
	return 0;
}
