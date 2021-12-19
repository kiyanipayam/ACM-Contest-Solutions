#include<iostream>
#include<math.h>
#include<string>
using namespace std;


int main()
{
	string s[1000];
	int i = 0;
	int max = 0;
	while (getline(cin, s[i])) { 
		if (max < s[i].length())
			max = s[i].length();
		i++;
	}
	for (int k = 0; k < max; k++)
	{

		for (int x = i-1; x >= 0; x--)
		{
			if (s[x].length() <= k)
				cout << " ";
			else
				cout << s[x][k];
		}
		cout << endl;
	}
}