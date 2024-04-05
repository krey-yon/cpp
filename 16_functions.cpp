#include <iostream>

using namespace std;

int add(int a, int b) {
    int c;
    c = a + b;
    return c;
}

int main() {
    int a, b;
    cout << "enter the value of a: ";
    cin >> a;
    cout << "enter the value of b: ";
    cin >> b;
    cout << "The sum of a and b is: " << add(a, b) << endl;
    return 0;
}