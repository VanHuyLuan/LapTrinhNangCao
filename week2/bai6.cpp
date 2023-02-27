#include <iostream>
using namespace std;

int ucln(int a, int b) {
    while (b) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int tu, mau;
    cin >> tu;
    cin >> mau;

    int g = ucln(tu, mau);

    tu /= g;
    mau /= g;

    cout << tu << "/" << mau << endl;

    return 0;
}

