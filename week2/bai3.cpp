#include<iostream>
using namespace std;
int main()
{
    int a , b , c;
    cin >> a >> b >> c;
    if(a + b > c && a + c > b && b + c > a)
    {
        cout << a+b +c << endl;
        if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b)
        {
            cout << "Tam giac vuong.";
        }
        else if(a == b && a == c && b == c)
        {
            cout << "Tam giac deu.";
            return 0;
        }
        else if((a == b && a == c) || (b == a && b == c) ||(c == a && c == b))
        {
            cout << "Tam giac deu.";
        }
    }
    else
    {
        cout << "Khong phai tam giac";
    }
    return 0;
}
