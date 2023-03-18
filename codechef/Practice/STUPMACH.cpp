#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n, ans = 0, mini;
        cin >> n;
        vector <int> s;
        
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            s.push_back(val);
            
            if (i == 0)
                mini = s[0];
                
            else if(s[i]<s[i-1])
                mini = s[i];
        }
        
        while(!s.empty())
        {
            vector<int>::iterator itr = find(s.begin(), s.end(), mini);
            int index = distance(s.begin(), itr);

            int sizi = s.size(); 
            ans = ans + ( mini * sizi );

            int d = s.size() - index;
            while(d--)      
                s.pop_back();
        
            for(int i=0; i<s.size()-1; i++)
                s[i] -= mini;
        }
        
        cout << ans << endl;
    }
	return 0;
}