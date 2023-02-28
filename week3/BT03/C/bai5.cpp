#include<iostream>
using namespace std;
struct sinhvien{
    double t, l , a;
};
int main()
{
    int n;
    cin >> n;
    sinhvien b[n];
    int c[n];
    int i , j;
    for(i = 0; i < n; i++)
    {
        cin >> b[i].t >> b[i].l >> b[i].a;
        c[i] = i+1;
    }
    for(i = 0; i < n - 1; i++)
    {
        for(j= i+1; j < n; j++)
        {
            if(b[i].t <b[j].t)
            {
                swap(b[i] , b[j]);
                swap(c[i] , c[j]);
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        cout << c[i] << "  ";
    }
    cout << endl;
    for(i = 0; i < n - 1; i++)
    {
        for(j= i+1; j < n; j++)
        {
            if(b[i].l <b[j].l)
            {
                swap(b[i] , b[j]);
                swap(c[i] , c[j]);
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        cout << c[i] << "  ";
    }
    cout << endl;
    double tb[n];
    for(i = 0; i < n; i++)
    {
        tb[i] = (b[i].t + b[i].l + b[i].a)/3;
    }
    for(i = 0; i < n - 1; i++)
    {
        for(j= i+1; j < n; j++)
        {
            if(tb[i] <tb[j])
            {
                swap(b[i] , b[j]);
                swap(c[i] , c[j]);
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        cout << c[i] << "  ";
    }
    cout << endl;
}
