#include<iostream>
#include<string>

using namespace std;

int main()
{
	long int a;
	long int d;
	int l;
	cin >> l;
	for (int i = 0; i < l; i++)
	{
		cin >> a >> d;
		d--;
		long int s = 1;
		for (long long int j = 0; j < a - 1; j++)
		{
			s = s * 2 + d % 2;
			d /= 2;
		}
		cout << s << endl;

	}
}