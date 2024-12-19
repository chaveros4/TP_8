#include <iostream>
#include <string>
using namespace std;
bool buscarPalabra(string cadena, string palabra) {
    if (cadena.find(palabra) != string::npos) {
        return true;
    }
    return false;
}
void imprimirResultado(bool encontrada, string palabra) {
    if (encontrada) {
        cout << "La palabra '" << palabra << "' se encuentra en la cadena." << endl;
    } else {
        cout << "La palabra '" << palabra << "' no se encuentra en la cadena." << endl;
    }
}
int main() {
    string cadena, palabra;
    cout << "Ingresa una cadena de texto: ";
    getline(cin, cadena);
    cout << "Ingresa la palabra que deseas buscar uwu: ";
    cin >> palabra;
    bool encontrada = buscarPalabra(cadena, palabra);
    imprimirResultado(encontrada, palabra);
    return 0;
}
