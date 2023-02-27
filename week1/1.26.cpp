#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n] , i ;
    double s = 0;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
        s += (double) a[i];
    }
    int min1 = a[0], max1 = a[0];
    for(i = 1; i < n ; i++)
    {
        if(min1 > a[i]) min1  = a[i];
        if(max1 < a[i]) max1 = a[i];
    }
    cout << "Mean: " << s/n << endl;
    cout << "Max: " << max1 << endl;
    cout << "Min: " << min1 << endl;
    return 0;
}
