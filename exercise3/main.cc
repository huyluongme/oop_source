#include <iostream>

using namespace std;

#include "hex_number.h"
#include "oct_number.h"
#include "dec_number.h"

int main()
{
    int value;
    cout << "Enter value: ";
    cin >> value;

    HexNumber hex(value);
    OctNumber oct(value);
    DecNumber dec(value);

    cout << "Hexadecimal: ";    
    hex.print_it();
    
    cout << "\nOctal: ";
    oct.print_it();

    cout << "\nDecimal: ";
    dec.print_it();
    return 0;
}