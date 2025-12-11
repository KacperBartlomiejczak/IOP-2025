#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    // Walidacja
    if (a <= 0 || b <= 0) {
        cout << "Blad: Liczby musza byc dodatnie!" << endl;
        return 0; // Kończymy program
    }

    cout << a << " " << b << endl;
    return 0;
}