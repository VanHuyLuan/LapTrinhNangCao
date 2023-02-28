#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n] , b[n+1] , i, j , c[n];
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
        c[i] = 1;
    }
    for(i = 0; i <= n; i++) {
        cin >> b[i];
    }
    for(i = 0; i < n + 1; i ++)
    {
        int dem = 0;
        for(j = 0; j < n; j++)
        {
            if(a[j] == b[i] && c[j])
            {
                c[j] = 0;
                dem ++;
                break;
            }
        }
        if(dem == 0)
        {
            cout << b[i];
            break;
        }
    }
    return 0;
}
