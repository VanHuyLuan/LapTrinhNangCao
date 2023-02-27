#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double pow1(double x , int y)
{
    double s = 1;
    for(int i = 0; i < y ; i++)
    {
        s = s*x;
    }
    return s;
}
int main()
{
    double x;
    int y;
    cin >> x >> y;
    cout << pow1(x,y) << endl;
    cout << (pow(x,y) == pow1(x , y))? "true" : "false";
    return 0;
}
