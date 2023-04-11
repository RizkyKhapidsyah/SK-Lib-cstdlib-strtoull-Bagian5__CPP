#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    char* end;

    /* berbasis octal */
    cout << "017x" << " to Unsigned Long Long Int with base-0 = " << strtoull("017x", &end, 0) << endl;
    cout << "End String = " << end << endl << endl;

    /* berbasis hexadecimal */
    cout << "0x1cg" << " to Unsigned Long Long Int with base-0 = " << strtoull("0x1cg", &end, 0) << endl;
    cout << "End String = " << end << endl << endl;

    /* berbasis decimal */
    cout << "70sxz" << " to Unsigned Long Long Int with base-0 = " << strtoull("70sxz", &end, 0) << endl;
    cout << "End String = " << end << endl << endl;

    _getch();
    return 0;
}