#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    set<int> seen;
    while (n != 1 && seen.find(n) == seen.end()) {

        seen.insert(n);

        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        n = sum;
    }

    if (n == 1)
        cout << "Happy Number";
    else
        cout << "Not a Happy Number";

    return 0;
}