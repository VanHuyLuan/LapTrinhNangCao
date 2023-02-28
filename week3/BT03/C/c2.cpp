#include<iostream>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int n = a.size() , i;
    for(i = 0; i < n ; i++)
    {
        if(a[i] != a[n - 1 - i])
        {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}
