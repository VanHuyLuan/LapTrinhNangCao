
#include<iostream>
#include<vector>
using namespace std;
bool check(vector <int> v )
{
    int n = v.size() , i , j;
    for(i = 1; i < n - 1; i++)
    {
        int sum1 = 0 , sum2 = 0;
        for(j = 0 ; j < i; j++ ) sum1 += v[j];
        for(j = i+1; j < n; j++) sum2 += v[j];
        if(sum1 == sum2) return true;
    }
    return false;
}
int main()
{
    int numOfVec;
    cin >> numOfVec ;

    vector<vector<int>> vec; //multidimensional vector
    for(int i = 0; i < numOfVec; ++i) {
        int size;
        cin >> size;
        vector<int> v;
        for(int j = 0; j < size; ++j) {
            int val;
            cin >> val;
            v.push_back(val);
        }
        vec.push_back(v);
    }
    for(int i = 0; i < numOfVec ; i++)
    {
        if(check(vec.at(i))) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
