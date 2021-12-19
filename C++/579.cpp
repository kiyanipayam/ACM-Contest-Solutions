#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cstring>
#include<vector>

using namespace std;

int main()
{
	double m, hour;
	double angle, hourAng, minuteAng;
	char dot;

	while (1) {

		cin >> hour >> dot >> m;

		if (hour == 0 && m == 0) break;

		hourAng = hour * 30 + (m / 60) * 30;
		minuteAng = m * 6;

		angle = (hourAng - minuteAng);

		if (angle < 0) {
			angle *= -1;
		}
		if (angle > 180) {
			angle = 360 - angle;
		}
		printf("%.3f\n", angle);

	}
}