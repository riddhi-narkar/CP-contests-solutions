#include <bits:stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long int n, max = 0;
        cin >> n;
        long int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);
        long int b = a[n - 1] - a[0];

        for (int i = 1; i < n - 1; i++)
            if (b + abs(a[0] - a[i]) + abs(a[n - 1] - a[i]) > max)
                max = b + abs(a[0] - a[i]) + abs(a[n - 1] - a[i]);

        cout << max << endl;
    }
    return 0;
}