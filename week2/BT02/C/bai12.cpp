#include<iostream>
#include<cmath>
using namespace std;
bool check(int n)
{
    int a = sqrt(n);
    if(a*a == n) return true;
    else return false;
}
int main()
{
    int n;
    cin >> n;
    if(check(n)) cout << "yes";
    else cout << "no";
    return 0;
}
