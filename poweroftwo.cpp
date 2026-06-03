#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0)
            return false;

        while (n % 2 == 0) {
            n /= 2;
        }

        return n == 1;
    }
};

int main() {
    Solution s;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (s.isPowerOfTwo(n))
        cout << n << " is a Power of Two" << endl;
    else
        cout << n << " is NOT a Power of Two" << endl;

    return 0;
}