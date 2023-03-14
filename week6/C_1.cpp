#include <iostream>
#include <cstring>

class String {
private:
    int n;
    char* str;
public:
    String(const char* s);
    ~String();
    void print() const;
    void append(const char* s);
};

String::String(const char* s) {
    n = strlen(s);
    str = new char[n + 1];
    strcpy(str, s);
}

String::~String() {
    delete[] str;
}

void String::print() const {
    std::cout << str << std::endl;
}

void String::append(const char* s) {
    int len = strlen(s);
    char* temp = new char[n + len + 1];
    strcpy(temp, str);
    strcpy(temp + n, s);
    delete[] str;
    str = temp;
    n += len;
}

int main() {
    String s("Hello");
    s.print(); // output: Hello

    s.append(" world");
    s.print(); // output: Hello world

    return 0;
}
