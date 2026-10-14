
/*
 * Program      : Sum of First 50 Natural Numbers
 * Name         : Abdullah Wahaj
 * Reg No       : L1S26BSCS0055
 * Assignment   : 01 - Getting Started with GitHub
 */
#include <iostream>
using namespace std;

int main() {
    const int N = 50;
    int sum = 0;

    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    cout << "Sum of first 50 natural numbers (loop): "
        << sum << endl;

    return 0;
}
