#include <iostream>

using namespace std;

long long int fact(int n) {
	long long int sum = 1;
	for (int i = 1; i <= n; ++i)
		sum *= i;
	return sum;
}
long double c(int n, int m) {
	long double top = 1;
	long long int bot;
	if (n == m)
		return 1;
	if (m < (n - m)) {
		bot = fact(m);
		for (int i = n; i >(n - m); --i) {
			top *= i;
		}
	}
	else {
		bot = fact(n - m);
		for (int i = n; i > m; --i) {
			top *= i;
		}
	}
	return top / bot;
}
int main() {
	long long int n, m;
	while (cin >> n >> m) {
		if (!n && !m)
			break;
		cout << n << " things taken " << m << " at a time is " << (int)c(n, m) << " exactly." << endl;
	}
	return 0;
}