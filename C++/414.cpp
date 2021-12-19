#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cstring>
#include<math.h>
#include<cmath>	
#include<stack>
#include<queue>
#include<climits>

using namespace std;

int main()
{
	long long int n;
	while (cin >> n && n != 0)
	{
		int max = INT_MIN;
		string a[30];
		getline(cin, a[0]);
		int count[30] = { 0 };
		for (int i = 0; i < n; i++)
		{
			getline(cin, a[i]);
			for (int j = 0; j < a[i].length(); j++)
				if (a[i][j] == 'X')
					count[i]++;
			if (count[i] > max)
				max = count[i];
		}
		int ans = 0;
		for (int i = 0; i < n; i++)
			ans += abs(count[i] - max);
		cout << ans << endl;
	}
}