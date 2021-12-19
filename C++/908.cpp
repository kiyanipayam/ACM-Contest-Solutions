#include<iostream>
//#include<string>
#include<vector>
#include<algorithm>
//#include<map>
//#include<cstring>
//#include<math.h>
//#include<cmath>	
//#include<stack>
//#include<queue>
//#include<string.h>
//#include<climits>
//#include<utility>

using namespace std;

vector <int> parent;
vector <int> rnk;

int findParent(int u)
{
	if (parent[u] == -1)
		return u;
	else
		return findParent(parent[u]);
}
bool issame(int u, int v)
{
	return (findParent(u) == findParent(v));
}
void unifiedTree(int u, int v)
{
	u = findParent(u), v = findParent(v);
	if (issame(u,v))
		return;
	else if (rnk[u] < rnk[v])
		parent[u] = v;
	else
	{
		parent[v] = u;
		if (rnk[u] == rnk[v])
			rnk[u]++;
	}
}
int main()
{
	int n,k=0;
	while (cin >> n)
	{
		int N = n;
		if (k != 0)
			cout << endl;
		k = 1;
		vector<pair<int, pair<int, int > > > edge;
		parent.assign(n + 1, -1);
		rnk.assign(n + 1, 0);
		int sum = 0;
		n--;
		int q,w,e;
		while (n--)
		{
			cin >> q >> w >> e;
			sum += e;
		}
		cin >> n;
		int a, b, c;
		while (n--)
		{
			cin >> a >> b >> c;
			edge.push_back({ c,{a,b} });
		}
		cin >> n;
		while (n--)
		{
			cin >> a >> b >> c;
			edge.push_back({ c,{a,b} });
		}
		sort(edge.begin(), edge.end());
		int summ = 0;
		int cnt = 0;
		for (int i=0;i<edge.size();i++)
		{
			if (!issame(edge[i].second.first, edge[i].second.second))
			{
				unifiedTree(edge[i].second.first, edge[i].second.second);
				summ += edge[i].first;
				cnt++;
			}
			if (cnt == N - 1)
				break;
		}
		cout << sum << endl << summ << endl;
	}
	
}