#include<iostream>
#include<cstring>
using namespace std;
struct Student {
    int id;
    double gpa;
};

struct Person {
    char name[50];
    int age;
    Student student;
};
int main()
{
    Person person1;
    strcpy(person1.name, "John Doe");
    person1.age = 30;
    person1.student.id = 123;
    person1.student.gpa = 3.5;
    Person person2 = person1;
    cout << person2.name << endl << person2.age << endl << person2.student.id << endl << person2.student.gpa;
    return 0;
}
