#include <iostream>
using namespace std;
int main() {
    int n, rev = 0, temp;
    cout << "Enter number: ";
    cin >> n;
    temp = n;
    while (n) { rev = rev * 10 + n % 10; n /= 10; }
    cout << (temp == rev ? "Palindrome" : "Not Palindrome");
}
