#include <iostream>

using namespace std;

int sign(int x) {
	int b;
	if (x < 0) {
		b = -1;
	}
	else if (x == 0) {
		b = 0;
	}
	else if (x > 0) {
		b = 1; }
	else {}
	return b;
}

int main() {
	cout << "Enter x and y" << endl;
	int x, y;
	cin >> x;
	cin >> y;
	cout << (sign(x) + sign(y)) * sign(x+y);
}
