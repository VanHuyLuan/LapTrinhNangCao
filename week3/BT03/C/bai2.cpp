#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n] , i;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max1 = a[0] , min1 = a[0] , sum = 0 , dem = 0;
    for(i = 0; i < n ; i++)
    {
        if(min1 > a[i]) min1 = a[i];
        if(max1 < a[i]) max1 = a[i];
        if(a[i] % 2 == 0) sum += a[i];
        else dem ++;
    }
    cout << min1 << endl << max1 << endl << sum << endl << dem ;
    return 0;
}
