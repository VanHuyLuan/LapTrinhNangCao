#include <iostream>
#include <string>
using namespace std;

string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

string convert(int n) {
    if (n >= 0 && n < 20) {
        return ones[n];
    } else if (n >= 20 && n < 100) {
        return tens[n/10] + ((n % 10 != 0) ? "-" + ones[n % 10] : "");
    } else if (n >= 100 && n < 1000) {
        return ones[n/100] + " hundred" + ((n % 100 != 0) ? " " + convert(n % 100) : "");
    } else if (n >= 1000 && n < 1000000) {
        return convert(n/1000) + " thousand" + ((n % 1000 != 0) ? " " + convert(n % 1000) : "");
    } else if (n >= 1000000 && n < 1000000000) {
        return convert(n/1000000) + " million" + ((n % 1000000 != 0) ? " " + convert(n % 1000000) : "");
    } else {
        return "number out of range";
    }
}

int main() {
    int n;
    cin >> n;
    if(n >= 0)
    {
        cout << convert(n) << endl;
    }
    else
    {
    	cout << "negative " << convert(-n) << endl;
	}
    return 0;
}
