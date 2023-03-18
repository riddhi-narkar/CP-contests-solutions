#include<bits:stdc++.h>
using namespace std;
 
// int main()
// {
//     set <int> sock;
//     int a = 3;

//     while(a--)
//     {
//         int b;
//         cin >> b;
//         sock.insert(b);
//     }

//     if(sock.size() != 3)
//         cout << "YES" << endl;
//     else
//         cout << " NO" << endl;

//     return 0;
// }

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a == b || b == c || a == c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}