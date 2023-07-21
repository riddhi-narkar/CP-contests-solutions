#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int alice, bob;
        cin >> alice >> bob;
        
        if(alice == bob)
            cout << "YES" << endl;
            
        else if(alice > bob)
        {
            while(alice > bob)
            {
                alice--;
                bob++;
            }
            
            if(alice == bob)
                cout << "YES" << endl;
            else
            cout << "NO" << endl;
        }
        
        else //bob has more
        {
            while(alice < bob)
            {
                bob--;
                alice +=3;
            }
            
            if(alice == bob)
                cout << "YES" << endl;
            else
            cout << "NO" << endl;
        }
    }
	return 0;
}