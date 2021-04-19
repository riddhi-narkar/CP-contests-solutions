#include <iostream>  
#include<string>  
using namespace std;  

int main()  
{  
    float a = 200.345;
    string s = to_string(a);

    for(int i = 0; i<7; i++)
    {
        cout << i << endl << endl;
        cout << "Int value" << int(s[i]) << endl;
        cout << "String value" << s[i] << endl;
    }
}  


