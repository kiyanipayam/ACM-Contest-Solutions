#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<cstring>
#include<sstream>
using namespace std;
int main()
{
	long long int n;
	cin >> n;
	for (int iii = 0; iii < n; iii++)
	{
		if(iii != 0)
			cout << endl;
		string s1, s2;
		while (s1 == "")
			getline(cin, s1);
		while (s2 == "")
			getline(cin, s2);
		map <int, string> ans;
		stringstream l(s1), ll(s2);
		string l2;
		int l1;
		while (l >> l1)
		{
			ll >> l2;
			ans[l1] = l2;
		}
		for (auto i = ans.cbegin(); i != ans.cend(); i++)
		{
			cout << i->second << endl;
		}
		
	}
}