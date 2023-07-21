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
        int n, answer, counter = 1, compare = 0;
        cin >> n;

        while(n--)
        {
            int words, quality;
            cin >> words >> quality;

            if(words > 10)
            {
                counter += 1;
                continue;
            }

            else
            {
                if(compare < quality)
                {
                    compare = quality;
                    answer = counter;
                }

                counter += 1;
            }
        }

        cout << answer << endl;
    }

    return 0;
}