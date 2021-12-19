#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		if (i != 0)
			cout << endl;
		int min = s.length();
		cin >> s;
		string bc = s + s;
		for (int j = 1; j <= s.length(); j++)
		{
			bool sw = true;
			for (int k = 0; k < bc.length() - j; k++)
			{
				if (bc[k] != bc[k + j])
				{
					sw = false;
					break;
				}
			}
			if (sw)
			{
				cout << j << endl;
				break;
			}
		}
	}
}