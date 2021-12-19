#include<algorithm>
#include<iostream>
#include<cstring>
#include<vector>
#include<string>
#include<queue>
#include<stack>
#include<map>
#include<cmath>
#include<cstring>

using namespace std;

int all[1000000] = { 0 };

int main()
{
	long long int l, h, r;
	while (cin >> l >> h >> r)
	{
		for (int i = l; i < r; i++)
		{
			if(h > all[i])
				all[i] = h;
		}
	}
	long long int last = -1;
	for (int i = 1; i < 1000000; i++)
	{
		if (last != all[i])
		{
			if(i != 1)
				cout << " " << i << " " << all[i];
			else
				cout << i << " " << all[i];
			last = all[i];
		}
	}
	cout << endl;
}