#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n == 1) cout << 1;
    else if(n == 2) cout << 1 << endl << 1 << " " << 1;
    else{
        cout << 1 << endl << 1 << " " << 1 << endl;
        int a[n];
        for(int i = 0; i < n ; i++) a[i] = 0;
        a[0] = 1;
        a[1] = 1;
        int dem = 2;
        while(dem != n)
        {
            int i;
            for(i = n-1; i >= 1; i--)
            {
                a[i] = a[i] + a[i-1];
            }
            for(i = 0; i < n; i++)
            {

                if(a[i]) cout << a[i] << " ";
            }
            cout << endl;
            dem ++;
        }
    }
    return 0;
}
