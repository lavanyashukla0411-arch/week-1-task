#include <iostream>
using namespace std;

class Solution {
public:
    bool isSumPalindrome(int n) {
        int sum = 0;
        int temp = n;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        
        int original = sum;
        int reverse = 0;

        while (sum > 0) {
            reverse = reverse * 10 + sum % 10;
            sum /= 10;
        }

        return original == reverse;
    }
};

int main() {
    Solution s;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (s.isSumPalindrome(n))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}