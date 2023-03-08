#include<iostream>
using namespace std;
char* weird_string() {
   char c[] = "123345";
   return c;
}
int main()
{
    cout << weird_string();
    return 0;
}
// Đây là một cảnh báo của trình biên dịch khi bạn cố gắng trả về địa chỉ của một biến cục bộ (local variable).
// Khi hàm kết thúc thì biến cục bộ sẽ không còn tồn tại nữa và không thể truy cập được đến nó.
// Do đó, việc trả về địa chỉ của một biến cục bộ có thể dẫn đến hành vi không xác định hoặc lỗi runtime.
