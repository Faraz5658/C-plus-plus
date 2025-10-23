#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 5;

    cout << "Arithmetic Operators:\n";
    cout << "x + y = " << x + y << endl;
    cout << "x - y = " << x - y << endl;
    cout << "x * y = " << x * y << endl;
    cout << "x / y = " << x / y << endl;
    cout << "x % y = " << x % y << endl;

    cout << "\nRelational Operators:\n";
    cout << (x > y) << " " << (x == y) << endl;

    cout << "\nLogical Operators:\n";
    cout << ((x > 0 && y > 0)) << " " << (x < 0 || y > 0) << endl;

    cout << "\nAssignment Operators:\n";
    x += y;
    cout << "x += y → " << x << endl;

    cout << "\nIncrement/Decrement Operators:\n";
    x++;
    cout << "x++ → " << x << endl;
    y--;
    cout << "y-- → " << y << endl;

    cout << "\nTernary Operator:\n";
    cout << ((x > y) ? "x is greater" : "y is greater") << endl;

    return 0;
}
