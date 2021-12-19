#include <iostream>
#include <string>
#include <vector>


using namespace std;

string fun(string st)
{
	if (st.length() == 0)
		return "Yes";
	else if (st[0] == ')' || st[0] == ']')
		return "No";
	else if (st[st.length() - 1] == '(' || st[st.length() - 1] == '[')
		return "No";
	string st_cpy = st;
	for (unsigned int i = 0; i < st.length() - 1; ++i) {
		if (st[i] == '(' && st[i + 1] == ')') {
			st[i] = '-';
			st[i + 1] = '-';
		}
		else if (st[i] == '[' && st[i + 1] == ']') {
			st[i] = '-';
			st[i + 1] = '-';
		}
	}
	if (st == st_cpy)
		return "No";
	char res[128];
	int c = 0;
	for (unsigned int j = 0; j < st.length(); ++j) {
		if (st[j] != '-') {
			res[c] = st[j];
			c++;
		}
	}
	res[c] = '\0';
	return fun(res);
}

int main() {
	int t;
	string s;
	cin >> t;
	getline(cin, s);
	for (int i = 0; i < t; ++i) {
		getline(cin, s);
		int p = 0, b = 0;
		for (unsigned int j = 0; j <s.length(); ++j) {
			if (s[j] == '(')
				p++;
			else if (s[j] == '[')
				b++;
			else if (s[j] == ')')
				p--;
			else if (s[j] == ']')
				b--;
		}
		if (b || p)
			cout << "No\n";
		else
		{
			string result = fun(s);
			cout << result << endl;
		}
	}
	return 0;
}