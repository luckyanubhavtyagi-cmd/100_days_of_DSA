#include <iostream>
using namespace std;

int main() {
    int a, b;
    int originalA, originalB;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    originalA = a;
    originalB = b;

    // Find GCD using Euclidean Algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    int gcd = a;
    int lcm = (originalA * originalB) / gcd;

    cout << "LCM = " << lcm << endl;

    return 0;
}