#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x,y;
    for(y = 0 ; y < n; y++)
    {
        for(x = -n+1; x < n ; x++)
        {
            if((abs(x) + y )>= y && (abs(x) + y) <= n-1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}
