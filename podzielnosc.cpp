#include <iostream>
using namespace std;

// Zostawiamy funkcję z gałęzi 'obliczenia'
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
    
    // Wstawiamy walidację z gałęzi 'sprawdzanie'
    if (a <= 0 || b <= 0) {
        cout << "Blad: Liczby musza byc dodatnie!" << endl;
        return 0;
    }

    // Wstawiamy wypisywanie z gałęzi 'obliczenia'
    cout << a << " " << b << " " << nwd(a, b) << endl;
    return 0;
}