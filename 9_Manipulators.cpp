/*

Description

endl
It is used to enter a new line with a flush.

setw(a)
It is used to specify the width of the output.

setprecision(a)
It is used to set the precision of floating-point values.

setbase(a)
It is used to set the base value of a numerical number.

*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    float PI = 3.14;
    int num = 100;
    cout << "Entering a new line." << endl;
    cout << setw(10) << "Output" << endl; //here 10 is the width of the output and width is in term of characters
    cout << setprecision(10) << PI << endl; //sets the precision of floating-point values
    cout << setbase(16) << num << endl; //sets base to 16
}