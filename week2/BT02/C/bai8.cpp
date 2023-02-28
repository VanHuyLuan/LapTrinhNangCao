#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float a, b, c, x1, x2, delta, realPart, imaginaryPart;

    cin >> a >> b >> c;

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << fixed << setprecision(2) << x2 << endl << x1 << endl;
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        cout << fixed << setprecision(2) << x1 << endl;
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-delta) / (2 * a);
        cout << fixed << setprecision(2) << realPart << " -" << imaginaryPart << endl << realPart << " " << imaginaryPart << endl;
    }

    return 0;
}
