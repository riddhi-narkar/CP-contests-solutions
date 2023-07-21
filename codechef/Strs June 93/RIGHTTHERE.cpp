#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        
        if(n<=x)
        cout << "YES" << endl;
        else
        cout << "NO" <<endl;
    }
	// your code goes here
	return 0;
}
