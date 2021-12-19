#include<iostream>
using namespace std;
int main()
{
	int i = 1, n, m, c;
	while (cin >> n >> m >> c )
	{
		if (n == 0 && m == 0 && c == 0)
			break;
		bool f = false;
		int amper[200], sw[200] = { 0 };
		for (int j = 0; j < n; j++)
			cin >> amper[j];
		long long int sum = 0, max = 0;
		int dummy;
		for (int j = 0; j < m; j++)
		{
			cin >> dummy;
			dummy--;
			if (sw[dummy] == 0)
			{
				sum += amper[dummy];
				sw[dummy] = 1;
				if (sum > max)
					max = sum;
			} 
			else// if (sw[dummy] == 1)
			{
				sum -= amper[dummy];
				sw[dummy] = 0;
			}
			if (sum > c)
				f = true;
		}
		if (f)	cout << "Sequence " << i << "\nFuse was blown.\n";
		else	cout << "Sequence " << i << "\nFuse was not blown.\nMaximal power consumption was " << max << " amperes.\n";
		cout << endl;
		i++;
	}
}