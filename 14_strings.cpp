#include <iostream>
#include <string>

using namespace std;

int main() {
    string string_name = "Hello";
    cout << string_name << endl;    
    cout << "length of sting is "<< string_name.length() << endl;
    cout <<"substring of string is "<< string_name.substr(1, 3) << endl; // 1 se start hoga aur 3 tak chalega
    return 0;
}