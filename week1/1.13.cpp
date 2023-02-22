#include<iostream>
#include<cmath>
using namespace std;
struct toado {
    double x,y;
};
int main()
{
    toado a;
    cin >> a.x >> a.y;
    double d = sqrt(a.x*a.x + a.y*a.y);
    cout << d;
    return 0;
}
