#include<iostream>
using namespace std;
int main()
{
    int i;
    cout << 12 << " midnight" << endl;
    for(i = 13 ; i <= 35 ; i++)
    {
        if(i <= 23)
        {
            cout << i - 12 << " am" << endl;
        }
        else if(i == 24)
        {
            cout << i - 12 << " noon" << endl;
        }
        else
        {
            cout << i - 24 << " pm" << endl;
        }
    }
    return 0;
}
