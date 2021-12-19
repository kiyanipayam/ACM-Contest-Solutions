#include<iostream>
#include<cstring>
#include<map>
#include<algorithm>
#include<vector>
#include<string>
#include <stdio.h>
#include <string.h>
#include<bitset>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int c = 1; c <= n; c++)
	{
		string s;
		cin >> s;

		long long int sum = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'O')
			{
				int count = 1;
				while (s[i] == 'O')
				{
					sum += count;
					count++;
					i++;
				}
				i--;
			}
		}
		cout << sum << endl;
	}
}
