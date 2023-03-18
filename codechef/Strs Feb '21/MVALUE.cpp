#include<bits:stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, itr;
        cin >> n;
        int arr[n];

        for(int i = 0; i<n; i++)
            cin >> arr[i];

        sort(arr, arr+n);
        itr = arr[n-1]*arr[n-2] + arr[n-1] - arr[n-2];

        if(n>2)
        {
            int i = n-2;
            while(arr[n-1] == arr[i])
            {
                i--;
                itr = arr[n-1]*arr[i] + arr[n-1] - arr[i];
            }
        }
        cout << itr << endl;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while(t--)
//     {
//         int n, itr;
//         cin >> n;
//         int arr[n];

//         for(int i = 0; i<n; i++)
//             cin >> arr[i];

//         sort(arr, arr+n);
//         itr = arr[n-1]*arr[n-2] + arr[n-1] - arr[n-2];

//         for(int i = n-2; i>=0; i--)
//         {
//             if(arr[n-1] == arr[i])
//                 continue;
            
//             else
//             {
//                 itr = arr[n-1]*arr[i] + arr[n-1] - arr[i];
//                 break;
//             }
//         }
      
//         cout << itr << endl;
//     }
//     return 0;
// }