#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int sw = false;
	int n;	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		for (int j = 0; j < b; j++)
		{
			int k = 1;
			if (sw)
			{
				cout << endl;
			}
			sw = true;
			for (; k < a; k++)
			{
				
				for (int ll = 0; ll < k; ll++)
				{
					cout << k;
				}
				cout << endl;
			}
			for (; k > 0; k--)
			{
				for (int ll = 0; ll < k; ll++)
				{
					cout << k;
				}
				cout << endl;
			}
		}
		
	}
}