#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double min  , max , step_size;
    cin >> min >> max >> step_size;
    for(double i = min ; i <= max ; i += step_size)
    {
        double c = (i - 32) / 1.8;
        double k = c + 273.15;
        cout << fixed << setprecision(2) <<  i << " " << c << " " << k;
        cout << endl;
    }
    return 0;
}
