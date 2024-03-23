#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 29;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " <<(float) a / b << endl; // type casting int ka int se divide karne par int hi aayega pr type casting karne se float me convert ho jayega
    cout << "a % b = " << a % b << endl; //modulas of a and b or remainder of a and b
    cout << "a++ = " << a++ << endl;  //post increment of by 1 a++(for add)(by1)
    cout << "a-- = " << a-- << endl;  //post decrement of by 1
    cout << "++a = " << ++a << endl;  //pre increment of by 1
    cout << "--a = " << --a << endl;  //pre decrement of by 1
    return 0;
}

// Relational Operator
#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 20;
    cout << "The value of a == b is " << (a == b) << endl; // == is equal to operator
    cout << "The value of a > b is " << (a > b) << endl; // > is greater than operator
    cout << "The value of a < b is " << (a < b) << endl; // < is less than operator
    cout << "The value of a >= b is " << (a >= b) << endl; // >= is greater than or equal to operator
    cout << "The value of a <= b is " << (a <= b) << endl; // <= is less than or equal to operator
    cout << "The value of a != b is " << (a != b) << endl; // != is not equal to operator
    return 0;
}

// Logical Operator

#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 20;
    cout << "The value of ((a == b) && (a < b)) is " << ((a == b) && (a < b)) << endl; //both true then true
    cout << "The value of ((a == b) || (a < b)) is " << ((a == b) || (a < b)) << endl; // any one true then true
    cout << "The value of (!(a == b)) is " << (!(a == b)) << endl; // not of true is false and not of false is true
    return 0;
}

//bitwise operator
#include <iostream>

using namespace std;

int main() {
    int a = 10; // 1010
    int b = 20; // 10100
    cout << "a & b = " << (a & b) << endl; // bitwise and operator does and operation on binary of a and b and gives output in decimal form and bitwise and operator gives 1 if both bits are 1 else 0
    cout << "a | b = " << (a | b) << endl; // or operator gives 1 if any of the bit is 1 else 0
    cout << "a ^ b = " << (a ^ b) << endl; // xor operator gives 1 if both bits are different else 0
    cout << "~a = " << (~a) << endl;  // not operator gives 1 if bit is 0 and 0 if bit is 1
    cout << "a << 2 = " << (a << 2) << endl; // left shift operator shifts the bits of a to left by 2 bits
    cout << "a >> 2 = " << (a >> 2) << endl; // right shift operator shifts the bits of a to right by 2 bits
    return 0;
}

// Assignment Operator
#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 20;
    a += b; // a = a + b
    cout << "a += b = " << a << endl;
    a -= b; // a = a - b
    cout << "a -= b = " << a << endl;
    a *= b; // a = a * b
    cout << "a *= b = " << a << endl;
    a /= b; // a = a / b
    cout << "a /= b = " << a << endl;
    a %= b; // a = a % b
    cout << "a %= b = " << a << endl;
    a &= b; // a = a & b
    cout << "a &= b = " << a << endl;
    a |= b; // a = a | b
    cout << "a |= b = " << a << endl;
    a ^= b; // a = a ^ b
    cout << "a ^= b = " << a << endl;
    a <<= 2; // a = a << 2
    cout << "a <<= 2 = " << a << endl;
    a >>= 2; // a = a >> 2
    cout << "a >>= 2 = " << a << endl;
    return 0;
}