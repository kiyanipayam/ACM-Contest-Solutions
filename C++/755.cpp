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
#include <iostream>
#include <string>

using namespace std;

int main()
{
	map<char, char>ch;
	string dummy;
	ch['A'] = '2';	ch['B'] = '2';	ch['C'] = '2';
	ch['D'] = '3';	ch['E'] = '3';	ch['F'] = '3';
	ch['H'] = '4';	ch['I'] = '4';	ch['G'] = '4';
	ch['J'] = '5';	ch['K'] = '5';	ch['L'] = '5';
	ch['M'] = '6';	ch['N'] = '6';	ch['O'] = '6';
	ch['P'] = '7';	ch['S'] = '7';	ch['R'] = '7';
	ch['T'] = '8';	ch['U'] = '8';	ch['V'] = '8';
	ch['W'] = '9';	ch['X'] = '9';	ch['Y'] = '9';
	int testcase;
	cin >> testcase;
	while (testcase--)
	{
		map<string, int> numbers;
		long long int n;
		cin >> n;
		while (n--)
		{
			string s;
			cin >> s;
			string number;
			int i = 0, j = 0;
			while (i < s.length())
			{
				if (j == 3)
					number += '-', j++;
				else if (s[i] >= '0' && s[i] <= '9')
					number += s[i], j++, i++;
				else if (s[i] >= 'A' && s[i] <= 'Z')
					number += ch[s[i]], i++, j++;
				else
					i++;
			}
			numbers[number]++;
		}
		bool duplicate = false;
		for (auto i = numbers.cbegin(); i != numbers.cend(); i++)
			if (i->second != 1)
				cout << i->first << " " << i->second << endl, duplicate = true;
		if (!duplicate)
			cout << "No duplicates.\n";
		if(testcase != 0)
			cout << endl;
	}
}