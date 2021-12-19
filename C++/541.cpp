#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int sw = 0, sw2 = 0, J, I;
		if (n == 0)
			break;
		int m[100][100];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> m[i][j];
		int sumi[100] = { 0 }, sumj[100] = { 0 };
		for (int j = 0; j < n; j++)
		{
			for (int i = 0; i < n; i++)
				sumi[j] += m[i][j];
			if (sumi[j] % 2 != 0 && sw == 1)
			{
				sw = 2;
				break;
			}
			if (sumi[j] % 2 != 0)
			{
				sw = 1;
				J = j;
			}
		}
		if (sw == 2)
			cout << "Corrupt" << endl;
		for (int i = 0; i < n && sw != 2; i++)
		{
			for (int j = 0; j < n; j++)
				sumj[i] += m[i][j];
			if (sumj[i] % 2 != 0 && sw2 == 1)
			{
				sw2 = 2;
				break;
			}
			if (sumj[i] % 2 != 0)
			{
				sw2 = 1;
				I = i;
			}
		}
		if (sw2 == 2)
			cout << "Corrupt" << endl;
		else if (sw == 1 && sw2 == 1)
			cout << "Change bit(" << I + 1 << "," << J + 1 << ")" << endl;
		else if(sw == 0 && sw2 == 0)
			cout << "OK" << endl;
	}
}