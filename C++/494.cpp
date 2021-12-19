#include<iostream>
#include<string>
using namespace std;
int main()
{
	
	string line;
	while (getline(cin, line))
	{
		long long int word = 0;
		int sw = 1;
		for (int i = 0; i < line.length(); i++)
		{
			if (line[i] < 'A')
			{
				if (sw == 0)
				{
					word++;
					sw = 1;
				}
			}
			else if (line[i] < 'a' && line[i] > 'Z')
			{
				if (sw == 0)
				{
					word++;
					sw = 1;
				}
			}
			else if (line[i] > 'z')
			{
				if (sw == 0)
				{
					word++;
					sw = 1;
				}
			}
			else
				sw = 0;
		}
		cout << word << endl;
	}
}