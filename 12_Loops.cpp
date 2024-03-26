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
    for (int i = 0; i < num; i++) {                 //for loop
        cout << "Value of i: " << i << endl;
    }
    return 0;
}

//While Loop in cpp

#include <iostream>

using namespace std;

int main() {
    int i = 10;
    while (i>0)
    {
        cout << "Value of i: " << i << endl;
        i++;
    }
    return 0;
}

//do-while loop in cpp
#include <iostream>

using namespace std;

int main() {
    int i = 10;
    do
    {
        cout << "Value of i: " << i << endl;
        i--;
    } while (i >= 0);
    return 0;
}