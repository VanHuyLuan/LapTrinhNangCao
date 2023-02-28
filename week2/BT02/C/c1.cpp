#include<iostream>
#include<cmath>
using namespace std;
bool check(int n)
{
    int dem = 0;
    for(int i = 2; i <= sqrt(n) ; i++)
    {
        if(n % i == 0) dem ++;
    }
    if(dem == 0) return true;
    else return false;
}
int main()
{
    int n;
    cin >> n;
    if(n == 1) cout << "no";
    else
    {
        if(check(n)) cout << "yes";
        else cout << "no";
    }
    return 0;
}
