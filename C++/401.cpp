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

int main()
{
	map<char, char>mirror;
	string s = "AEHIJLMOSTUVWXYZ12358";
	string A = "A3HILJMO2TUVWXY51SEZ8";
	for (int i = 0; i < s.length(); i++)
		mirror[s[i]] = A[i];
	string k;
	while (cin >> k)
	{
		bool mp = true, m = true, p = true;
		for (int i = 0; i < k.length(); i++)
		{
			if (k[i] != k[k.length() - 1 - i])
			{
				p = false;
				break;
			}
		}
		for (int i = 0; i < k.length(); i++)
		{
			if (k[i] != mirror[k[k.length() - 1 - i]])
			{
				m = false;
				break;
			}
		}
		if (m & p)
			cout << k << " -- is a mirrored palindrome.\n\n";
		else if (m && !p)
			cout << k << " -- is a mirrored string.\n\n";
		else if (!m && p)
			cout << k << " -- is a regular palindrome.\n\n";
		else
			cout << k << " -- is not a palindrome.\n\n";
	}
}