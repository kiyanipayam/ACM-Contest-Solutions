#include<iostream>
#include<math.h>

using namespace std;

int prime(int a)
{
	if (a % 2 == 0)
		return 0;
	else
		for (int i = 3; i <= sqrt(a); i++)
			if (a % i == 0)
				return 0;
	return 1;
}

int main()
{
	long long int n;
	while (cin >> n)
	{
		bool sw = false;
		if (n == 0)
			break;
		else if (n == 4)
			cout << "4 = 2 + 2" << endl;
		else if (n == 6)
			cout << "6 = 3 + 3" << endl;
		else if (n == 8)
			cout << "8 = 3 + 5" << endl;
		else
		{
			for (int i = 3; i < n && !sw; i += 2)
			{
				if (prime(i) == 1)
				{
					if (prime(n - i) == 1)
					{
						cout << n << " = " << i << " + " << n - i << endl;
						sw = true;
					}
				}
			}
		}
	}
}