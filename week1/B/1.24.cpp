#include <iostream>
#include <string>

using namespace std;

string dayOfWeek(int day, int month, int year) {
    // Tính số ngày tính từ ngày 1/1/1 đến ngày hiện tại
    int totalDays = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
    int monthDays[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        monthDays[1] = 29;
    }
    for (int i = 0; i < month - 1; i++)
    {
        totalDays += monthDays[i];
    }
    totalDays += day;
    int dayOfWeek = totalDays % 7;
    switch (dayOfWeek) {
        case 0:
            return "Sunday";
        case 1:
            return "Monday";
        case 2:
            return "Tuesday";
        case 3:
            return "Wednesday";
        case 4:
            return "Thursday";
        case 5:
            return "Friday";
        case 6:
            return "Saturday";
        default:
            return "";
    }
}

int main()
{
    int day, month, year;
    cin >> day >> month >> year;
    cout << dayOfWeek(day, month, year) << endl;
    return 0;
}
