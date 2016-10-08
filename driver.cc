#include <iostream>
#include <iomanip>
#include <stack>
using std::cout;
using std::setw;
using std::left;
using std::right;

#include "scan.h"
#include "parser_generator.cpp"
using namespace scanner;

// Call scanner repeatedly, printing results.
// You'll throw this code away once you've written your parser driver.



int main() {
    generate_parse_table();
    token tok;
    do {
        tok = scan();
        cout << setw(12) << left << tok.name
             << setw(5) << right << tok.line
             << setw(4) << right << tok.column
             << "   " << tok.image << "\n";
    } while (tok.num != tok_eof);
    return 0;
}
