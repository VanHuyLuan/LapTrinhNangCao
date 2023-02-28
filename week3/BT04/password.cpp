#include<iostream>
using namespace std;
bool check(string a , string b, int n)
{
    bool c = true;
    for(int i = 0; i < n ; i++)
    {
        if(a[i] != b[n - 1 -i])
        {
            c = false;
            break;
        }
    }
    return c;
}
int main()
{
    int n;
    cin >> n;
    string a[n];
    int i;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(i = 0; i < n-1 ; i++)
    {
        int d1 = a[i].size();
        for(int j = i+1; j < n; j++)
        {
            int d2 = a[j].size();
            if(d1 != d2) continue;
            else{
               if(check(a[i], a[j] , d1))
               {
                   cout << d1 << " " << a[i][d1/2];
               }
            }
        }
    }
    return 0;
}
