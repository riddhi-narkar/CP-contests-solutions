// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
  public:

     string solve(long long N,long long A[])
    {
        bool flag = false;
        long long sum = 0;
        for(long long i = 0; i<N; i++)
            sum += A[i];

        if(sum == 0)
            return "YES";

        else if(sum % 2 != 0)
            return "NO";
        else
        {
            for(long long i = 0; i<N; i++)
            {
                long long sum1 = sum/2;
                if(sum1 == A[i])
                    return "YES";
            }

            return "NO";
        }

    }
};

// { Driver Code Starts.
//Position this line where user code will be pasted.
int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
        long long A[N];

        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.solve(N, A) << "\n";
    }
    return 0;
}
  // } Driver Code Ends