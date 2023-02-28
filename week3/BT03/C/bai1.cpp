#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i ;
    double a[n] ,sum =0;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    double tb = sum / n;
    double var = 0;
    for(i = 0; i < n; i++)
    {
        var = var + (a[i] - tb)*(a[i] - tb);
    }
    cout << tb << " " << var/n;
    return 0;
}

