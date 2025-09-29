#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

 double K = 4.57;
 double A = -0.73;

double g(double t) {
    return K * (1 - exp(A * t));
}

int main() {
    cout << fixed << setprecision(3);
    cout << "     t     g  " << endl;

    double t = 0.2, h = 0.2;
    while (t <= 1.0 + 1e-9) {
        cout << setw(8) << t    << setw(6) << g(t) << endl;
        t += h;
    }


    t = 2.0; h = 1.0;
    do {
        cout << setw(8) << t  << setw(6) << g(t) << endl;
        t += h;
    } while (t <= 5.0 + 1e-9);


    return 0;
}