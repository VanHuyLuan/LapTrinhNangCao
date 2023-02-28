#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> a;
    int n ;
    do
    {
        cin >> n;
        a.push_back(n);
    }
    while(n >= 0);
    int m = a.size();
    for(int i = 0; i < m; i++)
    {
        int k = 0;
        cout << a[i] << " ";
        int j = i+1;
        while(a[j] == a[i])
        {
            j++;
            k++;
        }
        i = i + k;
    }
    return 0;
}
