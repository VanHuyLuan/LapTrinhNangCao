#include<iostream>
using namespace std;
struct point{
    double x , y;
};
int main()
{
    point a;
    point p;
    cout << &p << endl;   // In địa chỉ của biến p
    cout << &(p.x) << endl; // In địa chỉ của trường x trong biến p
    cout << &(p.y) << endl; // In địa chỉ của trường y trong biến p
    return 0;
}
// các trường trong một biến kiểu cấu trúc được lưu trữ tại các vị trí khác nhau trong bộ nhớ
// có thể được chèn thêm các trường khác giữa chúng nếu cần thiết.
