#include<iostream>
using namespace std; 
int SLength(int);
int main()
{
	long long int num1, num2, i = 0, max = 0, num, NUM1, NUM2;
	while (cin >> num1 >> num2)
	{
		NUM1 = num1;
		NUM2 = num2;
		if (num2 < num1)
			swap(num1, num2);
		max = -1222;
		i = num1;
		for (; i <= num2; i++)
		{
			num = SLength(i);
			if (num > max)
				max = num;
		}
		cout << NUM1 << " " << NUM2 << " " << max + 1 << endl;
	}
}
int SLength(int a)
{
	int i = 0;
	long long int temp = a;
	for (; a != 1 ;i++)
	{
		if (a % 2 != 0)
			a = a * 3 + 1;
		else
			a = a / 2;
	}
	return i;
}