#include<iostream>
#include<cmath>
using namespace std;
bool scp(int a)
{
    int b = sqrt(a);
    if(b* b == a) return true;
    else return false;
}
bool perfect(int a)
{
   if(a <= 1) return false;
   else
   {
        int s = 0;
    for(int i = 1; i < a ; i++)
    {
        if(a % i == 0) s += i;
    }
    if(s == a) return true;
    else return false;
   }
}
bool snt(int a)
{
    int dem = 0;
    for(int i = 2; i <= sqrt(a); i++)
    {
        if(a % i == 0) dem ++;
    }
    if(dem == 0) return true;
    else return false;
}
int main()
{
    int n;
    cin >> n;
    for(int i = 2 ; i <= n ; i++)
    {
        if(snt(i)) cout << i << " ";
    }
    cout << endl;
    for(int i = 2 ; i <= n ; i++)
    {
        if(perfect(i)) cout << i << " ";
    }
    cout << endl;
    for(int i = 2 ; i <= n ; i++)
    {
        if(scp(i)) cout << i << " ";
    }
    return 0;
}
