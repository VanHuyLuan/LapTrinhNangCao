#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int f0 = 0, f1 = 1, fn;
    while(f1 < n)
    {
        fn = f0+f1;
        f0 = f1;
        f1 = fn;
    }
    if(n == f1)
    {
        cout <<  " thuoc day fibonaci" << endl;
       int f0 = 0, f1 = 1, fn;
       cout << f0 << " " << f1 << " ";
       while(f1 < n)
       {
           fn = f0+f1;
           f0 = f1;
           f1 = fn;
           cout << f1 << " ";
       }
    }
    else cout <<  " khong thuoc day fibonaci";
    return 0;
}
