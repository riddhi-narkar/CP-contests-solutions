#include<bits:stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m, nsum = 0, msum = 0, count = 0, p = 0;
        vector<int> a;
        vector<int> b;

        cin >> n >> m;

        for(int i = 0; i<n; i++)
        {   
            int x ; 
            cin >> x;
            nsum += x;
            a.push_back(x);
        }

        for(int i = 0; i<m; i++)
        {   
            int x ; 
            cin >> x;
            msum += x;
            b.push_back(x);
        }

        if(a == b)
            cout << -1 << endl;

        else 
        {
            if(nsum > msum)
                cout << 0 << endl;
        
            else
            {
                sort(a.begin(), a.end());
                sort(b.begin(), b.end(), greater<int>());

                for(int i = 1; i <= min(n, m); i++)
                {
                    
                    int l = a[p];
                    int g = b[p];
                    
                    nsum = (nsum - l + g);
                    msum = (msum + l - g); 

                    count += 1;
                    p += 1;
                    
                    if(nsum > msum)
                    {
                        cout << count << endl;
                        break;
                    }
                }
                
                if(nsum < msum)
                cout << -1 << endl;
            }
            
        }
    }

    return 0;
}