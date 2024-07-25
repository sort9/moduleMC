#include <iostream>
using namespace std;

int remainderX;
float num1, num2, remains;

int modulate(float n1, float n2);
void factorCheck(float n1, float n2);
void positive_dividend_op();
void negative_dividend_op();

int main(void) {
    int choice;
    cout << "1. Positive dividend modulo operations i.e. 16 mod 8" << endl;
    cout << "2. Negative dividend modulo operations i.e. -15 mod 9" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
        case 1:
            positive_dividend_op();
        case 2:
            negative_dividend_op();
    }
    return 0;
}

void positive_dividend_op() {
    cout << "Number before mod: ";
    cin >> num1;
    cout << "Number after mod: ";
    cin >> num2;
    remains = modulate(num1, num2);
    cout << "Operation performed: " << num1 << " mod " << num2 << "\n";
    cout << "Answer: " << remains;
    factorCheck(num1, num2);
}

int modulate(float n1, float n2) {
    remainderX = n1 % n2;
    return remainderX;
}

void factorCheck(float n1, float n2) {
    if (remainderX == 0) {
        cout << "\n" << n1 << " is a factor of " << n2;
    }
}

void negative_dividend_op() {
    cout << "Number before mod: ";
    cin >> num1;
    cout << "Number after mod: ";
    cin >> num2;
    remainderX = (2 * num2) - num1;
    cout << "Operation performed: -" << num1 << " mod " << num2 << "\n";
    cout << "Answer: " << remainderX;
}
