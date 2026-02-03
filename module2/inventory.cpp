/*
Build & Run (bash):
g++ inventory.cpp -o inventory
./inventory
*/

#include <iostream>
using namespace std;

int main()
{
    // quick hello so we know the program runs
    cout << "Hello Inventory System!\n";

    // just formatting with escape sequences
    cout << "\n\tData Types (in bytes)\n";

    // sizeof tells you how many bytes each type uses on this system
    cout << "int:   " << sizeof(int) << " bytes\n";
    cout << "float: " << sizeof(float) << " bytes\n";
    cout << "char:  " << sizeof(char) << " bytes\n";

    return 0;
}
