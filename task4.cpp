#include <iostream>
#include <cmath>

using namespace std;

float ta(int z) {
	float a;
	a = sqrt(pow(z, 3)+4* pow(z, 2)+7*z+1) / (2+exp(2* pow(z, 3)+z-3));
	return a;
}

double tb(int t) {
	double b;
	b = (pow(t, 2) +13*t+16) / (7* pow(t, 3) + pow(t, 3) -4);
	return b;
}

int main() {
	cout << "Enter z and t" << endl;
	int z, t;
	cin >> z;
	cin >> t;
	cout <<"a = "<< ta(z) << " and  b = " <<tb(t);
	
}