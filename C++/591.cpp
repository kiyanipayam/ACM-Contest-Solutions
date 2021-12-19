#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cstring>
#include<vector>

using namespace std;

int main() {
	int n, sum, havg, x[55], ans, count = 1;

	while (scanf("%d", &n), n) {
		sum = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &x[i]);
			sum += x[i];
		}
		havg = sum / n;
		ans = 0;
		for (int i = 0; i < n; i++) {
			if (x[i] > havg)
				ans += x[i] - havg;
		}
		cout << "Set #" << count << "\n";
		cout << "The minimum number of moves is " << ans << ".\n\n";
		count++;
	}

	return 0;
}