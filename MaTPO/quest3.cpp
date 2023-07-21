// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std ;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int solve(int n,int ar[])
    {
        if(n == 1)
            return 1;

        sort(ar, ar + n);
        if(ar[n-1] > ar[n-2])
            return 1;
        else
            return 0;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        cin>>ar[i];

        Solution ob;
        cout << ob.solve(n,ar) << endl;
    }
    return 0;
}
  // } Driver Code Ends