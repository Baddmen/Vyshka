#include <iostream>
#include <cmath>

using namespace std;

double side(int x, int y, int x1, int y1){
    double a;
    a = sqrt((x - x1)* (x - x1) + (y - y1)*(y - y1));
    return a;
}
int main(){
    cout << "Enter coordinates" << endl;
    int x, y, x1, y1, x2, y2;
    cin >> x;
    cin >> y;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    cout << "P1 = ";
    cout << side(x, y, x1, y1) + side(x, y, x2, y2) + side(x1, y1, x2, y2) << endl;

    int x3, y3, x4, y4, x5, y5;
    cout << "Enter coordinates" << endl;
    cin >> x3;
    cin >> y3;
    cin >> x4;
    cin >> y4;
    cin >> x5;
    cin >> y5;
    cout << "P2 = ";
    cout << side(x3, y3, x4, y4) + side(x3, y3, x5, y5) + side(x4, y4, x5, y5) << endl;

}
