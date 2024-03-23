//switch statement
//switch statement
#include <iostream>

using namespace std;

int main() {
    int a = 10;

    switch(a) {
        case 10:
            cout << "a is 10" << endl;
            break;
        case 20:
            cout << "a is 20" << endl;
            break;
        default:
            cout << "a is neither 10 nor 20" << endl;
    }
    return 0;
}