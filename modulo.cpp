#include <iostream>
using namespace std;

int remainderX;
int num1, num2, remains;

int modulate(int n1, int n2);
void factorCheck(int n1, int n2);

int main(void) {
    cout << "Number before mod: ";
    cin >> num1;
    cout << "Number after mod: ";
    cin >> num2;
    remains = modulate(num1, num2);
    cout << "Operation performed: " << num1 << " mod " << num2 << "\n";
    cout << "Answer: " << remains;
    factorCheck(num1, num2);
    return 0;
}

int modulate(int n1, int n2) {
    remainderX = n1 % n2;
    return remainderX;
}

void factorCheck(int n1, int n2) {
    if (remainderX == 0) {
        cout << "\n" << n1 << " is a factor of " << n2;
    }
}