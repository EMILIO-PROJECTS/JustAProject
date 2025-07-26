#include <iostream>
#include <iomanip>

using namespace std;


int main() {

    // Careful about auto assigments
    auto var2 = 123u;   // declare and initialize with type deduction

    var2 = -32;    // Assign negative number. (WRONG)

    cout << var2 << endl;   // will print garbage!

}