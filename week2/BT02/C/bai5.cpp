#include<iostream>
using namespace std;
int ucln(int x , int y)
{
    while(y != 0)
    {
        int t = x%y;
        x = y;
        y = t;
    }
    return x;
}
int main()
{
    int x , y;
    cin >> x >> y;
    cout << ucln(x,y);
    return 0;
}

