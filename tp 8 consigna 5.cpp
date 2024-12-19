#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool esAnagrama(string cadena1, string cadena2) {
    cadena1.erase(remove(cadena1.begin(), cadena1.end(), ' '), cadena1.end());
    cadena2.erase(remove(cadena2.begin(), cadena2.end(), ' '), cadena2.end());
    if (cadena1.length() != cadena2.length()) {
        return false;
    }
    sort(cadena1.begin(), cadena1.end());
    sort(cadena2.begin(), cadena2.end());
    return cadena1 == cadena2;
}
int main() {
    string cadena1, cadena2;
    cout << "Ingresa la primera cadena: ";
    getline(cin, cadena1);
    cout << "Ingresa la segunda cadena: ";
    getline(cin, cadena2);
    if (esAnagrama(cadena1, cadena2)) {
        cout << "Las cadenas son anagramas." << endl;
    } else {
        cout << "Las cadenas no son anagramas." << endl;
    }
    return 0;
}
