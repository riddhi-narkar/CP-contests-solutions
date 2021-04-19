#include <iostream>
#include<stdlib.h>
using namespace std;   

int main() 
{
    int d1, v1, d2, v2, p, v = 0;
    cin >> d1 >> v1 >> d2 >> v2 >> p;
    
	int dif = abs(d1-d2);
    int d = min(d1, d2) - 1; 
    
    while(dif--)
    {
        if(min(d1, d2) == d1)
        {
            v += v1;
            d += 1;
        }
        
        else 
        {
            v += v2;
            d += 1;
        }
            
        if(v >= p)
        {
            cout << d << endl;
            break;
        }
    }

    if(v < p)
    {
        while(v < p)
        {
            v += v1 + v2;
            d++;
        }
        cout << d << endl;
    }
    
	return 0;
}