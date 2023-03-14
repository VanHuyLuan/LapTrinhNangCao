#include<iostream>
using namespace std;
struct point{
    double x;
    double y;
};
void print(point v)
{
    cout << "(" << v.x << "," << v.y << ")";
}
int main()
{
    point a;
    cin >> a.x >> a.y;
    print(a);
    return 0;
}
