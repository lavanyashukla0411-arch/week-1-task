#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        int original = x;
        long long reverse = 0;

        while (x != 0) {
            reverse = reverse * 10 + (x % 10);
            x /= 10;
        }

        return original == reverse;
    }
};

int main() {
    Solution obj;
    int x;

    cout << "Enter a number: ";
    cin >> x;

    if (obj.isPalindrome(x))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}