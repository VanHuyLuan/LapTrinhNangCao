#include <iostream>
#include <cstring>
using namespace std;
int count(char *a, char *b){
    int m = strlen(a);
    int n = strlen(b);
    int dem=0;

    for (int i = 0; i < n-m+1; i++){
        if (strncmp(b+i,a,m)==0) dem++;
    }
    return dem;
}

int main(){
    char *a = "qua";
    char *b = "quataoquatao";
    cout << count(a,b);
    return 0;
}
