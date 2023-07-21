#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        int arr[3];

        for (int i = 0; i < 3; i++)
            cin >> arr[i];

        sort(arr, arr+3);

        if((arr[1] + arr[2])>9)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}