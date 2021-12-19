#include<iostream>
#include<string>
using namespace std;
int search(string a, string b[], int n)
{
	int sw;
	for (int i = 0; i < n; i++)
		if (b[i] == a)
			sw = i;
	return sw;
}
int main()
{
	int names, sum[1000], ii = 0;
	string name[1000];
	while (cin >> names)
	{
		if (ii > 0)
		{
			cout << endl;
		}
		ii++;
		for (int i = 0; i < 1000; i++)
			sum[i] = 0;
		int a = 0, b = 0, count = 0;
		for (int i = 0; i < names; i++)
			cin >> name[i];
		for (int i = 0; i < names; i++)
		{
			int a, b;
			string dummy,backup;
			cin >> backup;
			cin >> a >> b;
			if (b != 0)
			{
				if (a % b == 0)
				{
					for (int j = 0; j < b; j++)
					{
						int prise = a / b;
						cin >> dummy;
						sum[search(dummy, name, names)] += prise;
					}
					sum[search(backup, name, names)] += -a;
				}
				else
				{
					for (int j = 0; j < b; j++)
					{
						int prise = a / b;
						cin >> dummy;
						sum[search(dummy, name, names)] += prise;
					}
					sum[search(backup, name, names)] += -a + (a%b);
				}
			}
		}
		for (int i = 0; i < names; i++)
		{
			cout << name[i] << " " << sum[i] << endl;
		}
	}
}