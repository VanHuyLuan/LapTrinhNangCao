#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char SS[100][100];
    int a[100][100];
    for (int i=0; i<n; i++)
    for (int j=0; j<m; j++)
        cin >> SS[i][j];
    for (int i=0; i<n; i++)
    for (int j=0; j<m; j++)
    {
        if(SS[i][j]== '.')
        {
            int b=0;
// 8 trường hợp có bom
            if(i>0 && SS[i-1][j]=='*')b++;
            if(i>0 && j>0 && SS[i-1][j-1]=='*')b++;
            if (i>0 && j<m-1 && SS[i-1][j+1]=='*')b++;
            if(j>0&& SS[i][j-1]=='*') b++;
            if(j<m-1&& SS[i][j+1]=='*') b++;
            if(i<n-1 && j>0 && SS[i+1][j-1]=='*')b++;
            if(i<n-1 && SS[i+1][j]=='*')b++;
            if(i<n-1 && j<m-1 && SS[i+1][j+1]=='*')b++;
// gán lại giá trị ở vị trí đó
            a[i][j] = b;
        }
        else continue;
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
