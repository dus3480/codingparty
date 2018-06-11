#include <iostream>
#include <cmath>

using namespace std;
double twoPointLength(int x1, int y1, int x2, int y2)
{
	int Xp = pow(x2 - x1,2);
	int Yp = pow(y2 - y1, 2);
	return sqrt(Xp + Yp);
}
int main() {
	int sx=0, sy=0, sm=0;
	int point[2][5] = { (0,0),(0,0),(0,0),(0,0),(0,0) };
	//scanf_s("sx sy sm", &sx, &sy, &sm);
	cin >> sx;
	cin >> sy;
	cin >> sm;

	return 0;
}
