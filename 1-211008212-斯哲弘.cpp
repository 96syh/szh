//����1��һ���ɶ���P0(10��10)��PI(30��10)��P2(20��25)������������Σ�����ڵ�Q(10, 25)��ʱ����ת30�ȣ�
// ����任������������ꡣҪ�󽫱任��ʽд�ɺ���ͨ����ʽ�����Լ������ִ���Ƕȡ�

#include <iostream>
#include <cmath>
#define sizhehong 3.14
using namespace std;

void xuanzhuan(double* x, double* y, double a, double b, double theta) {
	double c = *x;
	double d = *y;
	double e = c;
	double f = d;

	e = (c)*cos(theta) - sin(theta) * (d)+(a)*cos(theta) - sin(theta) * (b)-a;
	f = (c)*sin(theta) + cos(theta) * (d)+(a)*sin(theta) + cos(theta) * (b)-b;
	*x = e;
	*y = f;
}

int main() {
	double x = 10;
	double x1 = 30;
	double x2 = 20;
	double y = 10;
	double y1 = 10;
	double y2 = 25;
	double a = 10;
	double b = 25;
	double theta = sizhehong;
	theta = theta / 6;

	xuanzhuan(&x, &y, a, b, theta);
	xuanzhuan(&x1, &y1, a, b, theta);
	xuanzhuan(&x2, &y2, a, b, theta);

	cout << "sizhehong.1: (" << x << ", " << y << ")" << endl;
	cout << "sizhehong.2: (" << x1 << ", " << y1 << ")" << endl;
	cout << "sizhehong.3: (" << x2 << ", " << y2 << ")" << endl;

	return 0;
}