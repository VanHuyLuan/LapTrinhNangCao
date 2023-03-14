#include<iostream>
using namespace std;
struct point{
    double x, y;
};
point mid_point(point a , point b)
{
    point sum ;
    sum.x = (a.x + b.x)/2;
    sum.y = (a.y + b.y) / 2;
    return sum;
}
int main()
{
    point a , b;
    cin >> a.x >> a.y ;
    cin >> b.x >> b.y;
    point c =  mid_point(a , b);
    cout << c.x << " " << c.y;
    return 0;
}
