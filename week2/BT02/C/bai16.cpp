#include<iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cin >> n;
        if(n >= 0 && n <= 9)
        {
            cout << "vua nhap chu so ";
            switch(n)
            {
            case 0:
                {
                    cout << "khong";
                    break;
                }
            case 1:
                {
                    cout << "mot";
                    break;
                }
            case 2:
                {
                    cout << "hai";
                    break;
                }
            case 3:
                {
                    cout << "ba";
                    break;
                }
            case 4:
                {
                    cout << "bon";
                    break;

                }
            case 5:
                {
                    cout << "nam";
                    break;
                }
            case 6:
                {
                    cout << "sau";
                    break;
                }
            case 7:
                {
                    cout << "bay";
                    break;
                }
            case 8:
                {
                     cout << "tam";
                     break;
                }
            case 9:
                {
                    cout << "chin";
                    break;
                }
            }
        }
        else break;
    }
    while(n>= 0 && n <= 9);
    return 0;
}
