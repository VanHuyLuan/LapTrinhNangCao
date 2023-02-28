
#include <iostream>
using namespace std;

int main() {
    float a1, b1, c1, a2, b2, c2;

    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    float D = a1 * b2 - a2 * b1;
    float Dx = c1 * b2 - c2 * b1;
    float Dy = a1 * c2 - a2 * c1;

    if (D == 0 && Dx == 0 && Dy == 0) {
        cout << "Hai phuong trinh trung nhau" << endl;
    } else if (D == 0 && (Dx != 0 || Dy != 0)) {
        cout << "He phuong trinh vo nghiem" << endl;
    } else {
        float x = Dx / D;
        float y = Dy / D;
        cout << "He phuong trinh co nghiem: x = " << x << ", y = " << y << endl;
    }

    return 0;
}
