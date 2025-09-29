#include <iostream>
#include <cmath>
using namespace std;

double heron(double a, double b, double c) {
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    double a1 = 6.37, b1 = 7.75, c1 = 10.1;
    double a2 = 4.63, b2 = 6.92, c2 = 8.53;
    double h = 21.47;

    double S1 = heron(a1, b1, c1);
    double S2 = heron(a2, b2, c2);

    double xi = (h / 4.0) * (S1 + 2.0 * sqrt(S1 * S2) + 3.0 * S2)
        / (S1 + sqrt(S1 * S2) + S2);

    xi /= 1000.0;
    xi = round(xi * 1000000) / 1000000; 

    cout << "Otvet: " << xi << endl;

    return 0;
}