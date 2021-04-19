#include <iostream>
#include<cctype>
#include <string>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int l=0, u=0, sp=0, n=0;
	    string s, ans = "NO";
		cin >> s;

		if(s.length() >= 10)
			for(int i = 0; i < s.length(); i++)	 
			{
				if(islower(s[i]))
					l = 1;

				if(i>0 && i<s.length()-1)
				{
					if(isupper(s[i]))
						u = 1;
					if(isdigit(s[i]))
						n = 1;
					if(s[i] == '@' || s[i] == '#' || s[i] == '%' || s[i] == '&' || s[i] == '?')
						sp = 1;
				}
			}   

		if(l == 1 && u == 1 && sp == 1 && n == 1)
			ans = "YES";
		
		cout << ans << endl;
	}
	return 0;
}