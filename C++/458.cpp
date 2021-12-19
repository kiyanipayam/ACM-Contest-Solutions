#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	while (cin >> s)
	{
		for (int i = 0; i < s.length(); i++)
		{
			//if (s[i] == char(39))
				//cout << " ";
			//else
			cout << char(int(s[i]) - 7);
		}
		cout << endl;
	}
}