#include <iostream>

using namespace std;

int counting(int n);

int main() {
    int x;
    for (int j = 0; j < 3; ++j) {
        cout << "Enter a number: ";
        cin >> x;
        cout << "The even numbers counting up to there:\n";
        counting(x);
    }

    // main for part 2 will go here

    return 0;
}

int counting(int n) {
    if (n < 0) {
        // base case
        return 0;
    }
    else {
        // variant expression
        counting(n - (2 - (n % 2)));
        if (!(n % 2)) {
            cout << n << '\n';
        }
        return 0;
    }
}