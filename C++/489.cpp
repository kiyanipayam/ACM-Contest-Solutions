#include<iostream>
#include<cstring>
#include<map>
#include<algorithm>
#include<vector>
#include<string>
#include <stdio.h>
#include <string.h>
#include<bitset>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main()
{
	size_t round;
	while (cin >> round, round != -1)
	{
		string solution, guess;
		cin >> solution >> guess;

		int stroke = 0;
		for (size_t i = 0; i < guess.size()
			&& stroke <= 6
			&& solution != ""; ++i)
		{
			if (solution.find(guess[i]) != string::npos)
			{
				// Remove all guess[i] in solution.
				solution.erase(remove(solution.begin(), solution.end(),
					guess[i]),
					solution.end());
			}
			else
				++stroke;
		}
		cout << "Round " << round << endl;
		if (stroke == 7)
			cout << "You lose." << endl;
		else if (solution == "")
			cout << "You win." << endl;
		else
			cout << "You chickened out." << endl;
	}
	return 0;
}
/*
int main()
{
	int n;
	while (cin >> n)
	{
		if (n == -1)
			break;
		cout << "Round " << n << endl;
		string word, guess;
		cin >> word >> guess;
		int wrong_guess = 0;
		for (int i = 0; i < guess.length() && word != "" && wrong_guess <= 6; i++)
		{
			if (word.find(guess[i]) != string::npos)
				word.erase(remove(word.begin(), word.end(), guess[i]), word.end());
			else
				++wrong_guess;
		}
		if (wrong_guess == 7)
			cout << "You lose." << endl;
		else if (word == "")
			cout << "You win." << endl;
		else
			cout << "You chickened out." << endl;
		
	}

}*/