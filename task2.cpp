#include <iostream>

using namespace std;

float size(int x) {
	float a;
	double p = 3.14;
	a = (4*p*pow(x, 3))/3;
	return a;
}

int main() {
	cout << "Enter r" << endl;
	int r1, r2, r3;
	cin >> r1;
	cin >> r2;
	cin >> r3;
	cout << (size(r1) + size(r2) + size(r3)) / 3;

}