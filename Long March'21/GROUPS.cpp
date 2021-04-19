#include<bits:stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int count = 0;
        string a;
        cin >> a;
        
        for(int i = 0; i<a.length()-1; i++)
            if(a[i] == '1' && a[i+1] == '0')
                count += 1;
            
        if(a[a.length()-1] == '1')
            count += 1;

        cout << count << endl;
    }
    return 0;
}