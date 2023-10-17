#include <iostream>
using namespace std;

int main() {
    double v, t, a;
    cout << "Enter initial velocity (v): ";
    cin >> v;
    cout << "Enter time duration (t): ";
    cin >> t;
    cout << "Enter acceleration (a): ";
    cin >> a;

    double S = v * t + 0.5 * a * t * t;

  
    cout << "Distance traveled: " << S << endl;

    return 0;
}
