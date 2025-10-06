#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    if (x > y)
        cout << x << " is larger";
    else
        cout << y << " is larger";
    return 0;
}
