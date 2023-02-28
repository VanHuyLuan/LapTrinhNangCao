#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n%2==0) return 0;
    int a[n][n];

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            a[i][j]=0;
        }
    }
    int i=n-1,j=n/2 ,dem=1;
    a[i][j]=1;
    while (dem<=n*n){
        if (a[(i + 1) % n][( j + 1  )% n] == 0){
            dem ++;
            a[(i + 1) % n][(j + 1) % n] = dem;
            i=(i + 1) % n;
            j = (j + 1) % n;
        }
        else {
            dem++;
            a[(i - 1 ) % n][j]=dem;
            i=(i-1)%n;
            j=j;
        }
    }

    for (i = n-1; i >= 0; i--) {
        for (j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
