#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while(t--)
	{
	    int x, y, k, n;
	    cin >> x >> y >> k >> n;
	    
	    if( abs(y-x)%(2*k) == 0) 
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}