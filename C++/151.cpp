#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<map>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
	string s;
	while (cin >> s)
	{
		if (s == "0")
			break;
		long long int sum = 0;
		for (int i = 0 , j = s.length(); i < s.length() && j > 0; i++,j--)
		{
			int d = s[i] - '0';
			int p = pow(2, j) - 1;
			sum += d *p;
		}
		cout << sum << endl;
	}
}