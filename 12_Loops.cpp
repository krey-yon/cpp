//For Loop in cpp

/* 
for (initialise counter; test counter; increment / decrement counter)
{
    //set of statements
}
*/
#include <iostream>

using namespace std;

int main() {
    int num = 10;
    int i;
    for (int i = 0; i < num; i++) {
        cout << "Value of i: " << i << endl;
    }
    return 0;
}