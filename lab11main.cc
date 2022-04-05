#include <iostream>

using namespace std;


int counting(int n);

void print_stars(int n);
void see_stars(int count, int stop);


int main() {
    // main for part 1
    int x;
    for (int j = 0; j < 3; ++j) {
        cout << "Enter a number: ";
        cin >> x;
        cout << "The even numbers counting up to there:\n";
        counting(x);
    }

    // main for part 2
    int n;
    cout << "Enter a number between 1 and 30 to see the stars\n";
    cin >> n;
    see_stars(1, n);

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

void print_stars(int n) {
    if (n <= 0) {
        // base case
        cout << '\n';
    }
    else {
        // variant expression
        cout << '*';
        print_stars(n - 1);
    }
}

void see_stars(int count, int stop) {
    if (count <= 0 || count > stop) {
        // base case
        return;
    }
    else {
        // variant expression
        print_stars(count);
        see_stars(count + 1, stop);
        print_stars(count);
    }
}