#include <iostream>

using namespace std;

int main() {
    int ary[5] = {1, 2, 3, 4, 5};
    ary[2] = 10; // change the value of the 3rd element
    cout << ary[0] << endl << ary[1] << endl << ary[2] << endl << ary[3] << endl << ary[4] << endl;
    return 0;
}