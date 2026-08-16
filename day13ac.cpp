#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    // n > 0 ensures 0 and negative numbers return false
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int n = 35;

    if (isPowerOfTwo(n)) {
        cout << n << " is a power of 2" << endl;
    } else {
        cout << n << " is NOT a power of 2" << endl;
    }

    return 0;
}
