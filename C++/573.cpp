#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int H, D, F, dia;
	float U, alt, f;

	while (1)
	{
		cin >> H >> U >> D >> F;
		if (H == 0) break;
		dia = 1;
		alt = 0;
		f = U*F / 100;
		while (1) {
			alt += U;
			if (U > 0)
				U -= f;
			if (alt > H) break;
			alt -= D;
			if (alt < 0) break;
			dia++;
		}
		if (alt < 0)
			cout << "failure on day " << dia << "\n";
		else
			cout << "success on day " << dia << endl;
	}
	return 0;
}