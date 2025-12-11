#include <iostream>
using namespace std;

// Funkcja obliczająca NWD
int nwd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;
    // Zmiana w wypisywaniu - dodajemy NWD
    cout << a << " " << b << " " << nwd(a, b) << endl;
    return 0;
}