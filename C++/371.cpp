#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cstring>
#include<math.h>
#include<cmath>	
#include<stack>
#include<queue>


using namespace std;

long long int c;

void akermann(long long int n)
{
	if (n == 1)
		return;
	else if (n % 2 == 0)
	{
		c++;
		akermann(n / 2);
	}
	else
	{
		c++;
		akermann(3 * n + 1);
	}
}

int main()
{
	long long int a, b;
	while (cin >> a >> b)
	{
		long long int s = 0;
		long long int max = 0;
		if (a == 0 && b == 0)
			break;
		if (a > b)
			swap(a, b);
		for (int i = a; i <= b; i++)
		{
			c = 0;
			if (i == 1)
				c = 3;
			akermann(i);
			if (max < c)
			{
				max = c;
				s = i;
			}

		}
		cout << "Between " << a << " and " << b << ", " << s << " generates the longest sequence of " << max << " values.\n";
	}
}