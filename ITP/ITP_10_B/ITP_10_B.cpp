// Triangle
#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a, b, C;
    cin >> a >> b >> C;
    double radC = C * M_PI / 180;
    double h = sin(radC)*b;
    double S = (a * h)/2;
    double bc = sqrt(a * a + b * b - (2 * a * b) * cos(radC));

    printf("%0.8lf\n", S);
    printf("%0.8lf\n", a+b+bc);
    printf("%0.8lf\n", h);
}