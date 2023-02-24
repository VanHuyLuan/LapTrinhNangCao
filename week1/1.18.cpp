#include<iostream>
#include<cmath>
using namespace std;
struct toado{
    double x, y;
};
int main()
{
    toado a , b;
    cin >> a.x >> a.y >> b.x >> b.y;
    double c = sqrt((b.x - a.x)*(b.x - a.x) + (b.y - a.y)* (b.y - a.y));
    cout << c;
    return 0;
}
