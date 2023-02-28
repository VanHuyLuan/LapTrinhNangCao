#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n] , b[10] , i;
    for(i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    for(i = 0; i < 10; i++) b[i] = 0;
    for(i = 0; i < n ; i++)
    {
        b[a[i]] ++;
    }
    for(i = 0; i < 10; i++)
    {
        if(b[i]) cout << i << "    " << b[i] << endl;
    }
    return 0;
}
