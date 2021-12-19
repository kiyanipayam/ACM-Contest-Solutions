#include <iostream>
#include<algorithm>
#include<string>
#include<map>

using namespace std;

int main()
{
	int testcase;	cin >> testcase;
	while (testcase--)
	{
		long long int n;
		cin >> n;
		string s = "1";
		for (int i = 2; i <= n; i++)
			s = s + to_string(i);
		map <char, int>ans;
		string ss = "0123456789";
		for (int i = 0; i < ss.length(); i++)
			ans[ss[i]] = 0;
		for (int i = 0; i < s.length(); i++)
			ans[s[i]]++;
		bool sw = false;
		for (auto i = ans.cbegin(); i != ans.cend(); i++)
		{
			if (sw)
				cout << " " << i->second;
			else
			{
				cout << i->second;
				sw = true;
			}
		}
		cout << endl;
	}
}