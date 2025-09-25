#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    vector<double> t_values = {0.2, 0.4, 0.6, 0.8, 1, 2, 3, 4, 5};

    cout << fixed << setprecision(3);
    cout << "t (мин)        g (кг)" << endl;
    cout << "----------------------" << endl;

    double A = 4.57;
    double k = 0.73;

    for (double t : t_values) {
        double g = A * (1 - exp(-k * t));
        cout << t << "          " << g << endl;
    }

    return 0;
}