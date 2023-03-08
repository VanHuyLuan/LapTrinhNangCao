#include<iostream>
using namespace std;
int search(int *a , int n , int x)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(a[i] == x) return i;
    }
    return -1;
}
int main()
{
    int n , x;
    cin >> n >> x;
    int *a = new int [n];
    int i;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << search(a , n , x);
    return 0;
}
