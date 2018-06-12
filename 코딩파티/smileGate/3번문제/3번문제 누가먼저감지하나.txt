#include <iostream>
#include <cmath>

using namespace std;
double twoPointLength(int x1, int y1, int x2, int y2)
{
	int Xp = pow((x1 - x2), 2.0);
	int Yp = pow((y1 - y2), 2.0);
	//cout << " xp : "<<Xp << " yp: "<<Yp << endl;
	//cout << "두점 사이거리 함수 temp " << temp << endl;
	//cout << "두점 사이거리 함수 sqrt " << sqrt(temp) << endl;
	return sqrt(Xp + Yp);
}
int decision(double v[],  int r) {
	int i = -1;
	double temp = v[0];


	for (int i = 0; i < 5; i++)
		if (temp > v[i]) temp = v[i];

	//for (int i = 0; i < 5; i++)
	//	cout << "v: " << i << ": " << v[i] << endl;;

	//cout << "R : " << r <<endl;
	//cout << "temp : " << temp << endl;

	if(temp > r) return i;
	else {
		int j = 0;
		
		for (j = 0; j < 5; j++)
			if (v[j] == temp) break;
		return j;
	}
}

int main() {
	int sx=0, sy=0, sm=0; //발생원의 정보 변수 
	int point[5][2] = {   //센서의 정보 변수 
		(0,0),
		(0,0),
		(0,0),
		(0,0),
		(0,0) 
	};
	double distance[5] = { 0.0,0.0,0.0,0.0,0.0 }; // 센서와 발생원 사이의 거리를 저장할 변수

	//scanf_s("sx sy sm", &sx, &sy, &sm);
	//발생원의 xyr값 받기
	cin >> sx;
	cin >> sy;
	cin >> sm;

	for (int i = 0; i < 5; i++) {//다섯개의 센서위치 받기 
		for (int j = 0; j < 2; j++)
			cin >> point[i][j];
	}

	for (int i = 0; i < 5; i++) {//다섯개의 센서와 발생원 사이의 거리 
		distance[i] = twoPointLength(point[i][0], point[i][1], sx, sy);
	}
	//for (int i = 0; i < 5; i++) cout << "main distance :" << distance[i] << endl;;
	cout << decision(distance, sm) + 1 ; //0번째 를 1번째로
	return 0;
}
