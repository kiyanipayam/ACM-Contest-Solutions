#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int min, max, iii = 1;
	while (cin >> min >> max && min >= 0)
	{
		long long int term = 0, A = min;
		while (true)
		{
			if (A == 1)
				break;
			else if (A % 2 == 0)
				A = A / 2;
			else
				A = A * 3 + 1;
			if (A > max)
				break;
			term++;
		}
		printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n", iii, min, max, term + 1);
		iii++;
	}
}