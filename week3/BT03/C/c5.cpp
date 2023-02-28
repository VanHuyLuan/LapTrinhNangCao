#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	cin >> m >> n;
	int a[m][n];
    int b[m * n];
    for (int i=0; i<m*n; i++){
        b[i]=i+1;
    }
    int z = 0 , e = 0 , d = 0 , x = m , y = n;
    while (e<x && d<y){
        // dòng đầu tiên của ma trận B
        for (int i = d; i < y; i++)
        {
            a[e][i] = b[z];
            z++;
        }
        e++;
        // cột cuối cùng của ma trận B
        for (int i = e; i < x; i++)
        {
            a[i][y - 1] = b[z];
            z++;
        }
        y--;
        //dòng cuối cùng của ma trận B
        if (e < x)
        {
            for (int i = y - 1; i >= d; i--)
            {
                a[x - 1][i] = b[z];
                z++;
            }
            x--;
        }
        //dòng còn lại của ma trận B
        if (d < y)
        {
            for (int i = x - 1; i >= e; i--)
            {
                a[i][d] =b[z];
                z++;
            }
            d++;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
