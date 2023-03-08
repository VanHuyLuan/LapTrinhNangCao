#include <iostream>
using namespace std;

void mang(int *arr, int size)
{
    cout << sizeof(arr) << endl;
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    cout << sizeof(a) << endl;
    mang(a, 5);

    return 0;
}
