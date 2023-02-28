#include<iostream>
using namespace std;
int main()
{
    double a , s = 0;
    for(int i = 0; i < 5; i++)
    {
        cin >> a;
        s =s + a;
    }
    cout << s/5;
    return 0;
}
