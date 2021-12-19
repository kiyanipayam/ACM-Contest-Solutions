#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	int test;
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		int ss = 0;
		int n;
		cin >> n;
		long long int a[10000];
		memset(a, -1, 10000);
		for (int j = 0; j < n; j++)
			cin >> a[j];
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k + j < n && a[k + 1] != -1; k++)
			{
				if (a[k] > a[k + 1])
				{
					swap(a[k], a[k + 1]);
					ss++;
				}
			}
		}
		cout << "Optimal train swapping takes " << ss << " swaps.\n";
	}
}