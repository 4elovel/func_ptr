
#include <iostream>
#include <math.h>

using namespace std;

void Print_num(double a,double b) {
    cout << round((b / a * 100) * 10) / 10 << "%";
}

void Print_text(double a, double b) {
    cout << "The second number is about " << round((b / a * 100) * 10) / 10 << " percent of the first";
}

int main()
{
    double a, b;
    void(*ptr)(double, double);
    bool c;
    cout << "Write first number->\n";
    cin >> a;
    cout << "Write second number->\n";
    cin >> b;
    if (b < 0) throw exception("Out of range");
    cout << "Which show format would you prefer->\n"
        << "0 - Number\n"
        << "1 - Text\n";
    cin >> c;
    c == 0 ? ptr = Print_num : ptr = Print_text;
    ptr(a,b);
}
