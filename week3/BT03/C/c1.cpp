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
    for(i=  0; i < n-1 ; i++)
    {
        for(int j = i+1; j < n ; j++)
        {
            if(a[i] == a[j])
            {
                cout << "yes";
                return 0;
            }
        }
    }
    cout << "no";
    return 0;
}
