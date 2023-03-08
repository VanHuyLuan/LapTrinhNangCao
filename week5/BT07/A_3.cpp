#include<iostream>
using namespace std;
int count_even(int *a, int n)
{
    int dem = 0;
    for(int i = 0; i < n ; i++)
    {
        if(a[i] % 2 == 0) dem ++;
    }
    return dem;
}
int main()
{
    int n;
    cin >> n;
    int *a = new int [n] ;
    int i;
    for(i = 0; i < n; i++)
    {

        cin >> a[i];

    }
    cout << count_even(a,5) << endl;
    cout << count_even(&a[n-5],5);
    return 0;
}
