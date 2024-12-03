#include <iostream>
#include <cmath>
using namespace std;


double deg2rad(double degree) {
    return degree * M_PI / 180.0;
}

double rad2deg(double radian) {
    return radian * 180.0 / M_PI;
}

double findXComponent(double l1, double l2, double a1, double a2) {
    return (l1 * cos(a1)) + (l2 * cos(a2));
}

double findYComponent(double l1, double l2, double a1, double a2) {
    return (l1 * sin(a1)) + (l2 * sin(a2));
}

double pythagoras(double xComp, double yComp) {
    return sqrt(pow(xComp, 2) + pow(yComp, 2));
}

void showResult(double resultVecLength, double resultVecDirection) {
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << resultVecLength << endl;
    cout << "Direction of the resultant vector (deg) = " << resultVecDirection << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}

int main() {
    double l1, l2, a1, a2;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;

    a1 = deg2rad(a1);
    a2 = deg2rad(a2);

    double xComp = findXComponent(l1, l2, a1, a2);
    double yComp = findYComponent(l1, l2, a1, a2);

    double resultVecLength = pythagoras(xComp, yComp);
    double resultVecDirection = rad2deg(atan2(yComp, xComp));

    showResult(resultVecLength, resultVecDirection);

    return 0;
}