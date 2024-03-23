/*
if ( condition ){
statements;}
 else {
statements;}
*/


#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 20;
    if (/* condition */ a > b){
        cout << "a is greater than b" << endl;
    }
//   else if (/* condition */){}   
    else{
        cout << "b is greater than a" << endl;
        cout << "This is a block" << endl << a + b << endl;
    }
    return 0;
}