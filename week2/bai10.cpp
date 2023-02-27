#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double n;
    cin >> n;
    double c = (n - 32) / 1.8;
    double k = c + 273.15;
    cout <<   n <<fixed << setprecision(2) << " " << c << " " << k;
    return 0;
}
