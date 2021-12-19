#include<iostream>
#include<math.h>

using namespace std;

long long int sum(int a)
{
	long long int sum = 0;
	for (int  i = 1; i < a ; i++)
	{
		if (a % i == 0)
			sum += i;
	}
	return sum;
}

int main()
{
	cout << "PERFECTION OUTPUT" << endl;
	long long int n;
	while (cin >> n)
	{
		if (n == 0)
			break;
		int c = 0;
		long long int backup = n;
		while (backup != 0)
		{
			backup /= 10;
			c++;
		}
		for (int i = 0; i < 5 - c; i++)
		{
			cout << " ";
		}
		long long int m = sum(n);
		if (m == n)
		{
			cout << n << "  " << "PERFECT" << endl;
		}
		else if (m > n)
		{
			cout << n << "  " << "ABUNDANT" << endl;
		}
		else if (m < n)
		{
			cout << n << "  " << "DEFICIENT" << endl;
		}
	}
	cout << "END OF OUTPUT" << endl;

}