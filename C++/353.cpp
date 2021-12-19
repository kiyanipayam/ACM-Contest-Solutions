#include<algorithm>
#include<iostream>
#include<cstring>
#include<vector>
#include<string>
#include<queue>
#include<stack>
#include<map>
#include<cmath>
#include<cstring>

using namespace std;

bool pal(string d)
{
	for (int i = 0; i < d.length(); i++)
	{
		if (d[i] != d[d.length() - i - 1])
			return false;
	}
	return true;
}

int main()
{
	string s;
	while (cin >> s)
	{
		long long int ans = 0;
		map<char, int> ch;
		for (int i = 0; i < s.length(); i++)
		{
			if (ch[s[i]] == 0)
				ans++, ch[s[i]] = 1;
		}
		map<string, int> dd;
		for (int i = 2; i <= s.length(); i++)
		{
			for (int j = 0; j < s.length(); j++)
			{
				string dummy;
				for (int k = j; k < j+i && i+j <= s.length(); k++)
					dummy = dummy + s[k];
				dd[dummy] = 1;
			}
		}
		for (auto i = dd.cbegin(); i != dd.cend(); i++)
		{
			if (i->second == 1)
				if (pal(i->first))
					ans++;
		}
		cout <<"The string '" << s << "' contains "<< ans - 1 << " palindromes.\n";
	}
}