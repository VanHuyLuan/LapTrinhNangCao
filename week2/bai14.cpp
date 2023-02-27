#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a;
    cin >> a;
    int max1 = a , min1 = a;
    for(int i = 2 ; i <= n; i++)
    {
        cin >> a;
        if(a > max1) max1 = a;
        if(min1 > a) min1 = a;
    }
    cout << max1 << " " << min1;
    return 0;
}
