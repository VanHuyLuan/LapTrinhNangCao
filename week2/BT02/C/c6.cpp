#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i <= n-1 ; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i + j > n) cout << i+j - n << " ";
            else cout << i+j << " ";
        }
        cout << endl;
    }
    return 0;
}