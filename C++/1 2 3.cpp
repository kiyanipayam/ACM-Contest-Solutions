#include<iostream>
using namespace std;
int main()
{
	char s[100][100];
	int n;
	cin >> n;
	for (size_t i = 0; i <= n; i++)
		cin.getline(s[i], 99);
	for (size_t i = 0; i <= n; i++)
	{
		int k = 0;
		for (; s[i][k]; k++);
		if (k == 3)
		{
			if ((s[i][0] == 'o' || s[i][1] == 'n') &&(s[i][0] == 'o' || s[i][2] == 'e') && (s[i][2] == 'e' || s[i][1] == 'n'))
				cout << 1 << endl;
			else if (s[i][0] == 't' || s[i][1] == 'w' || s[i][2] == 'o')
				cout << 2 << endl;
		}
		else if (k == 5)
			cout << 3 << endl;
	}
	system("pause");
}