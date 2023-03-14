#include<iostream>
using namespace std;
struct point{
    double x, y;
};
void print(point a)
{
    cout << &a;
}
void print1(point& a)
{
    cout << &a;
}
int main()
{
    point a;
    a.x = 4;
    a.y = 5;
    print(a) ;
    cout<< endl;
    print1(a);
    return 0;
}
