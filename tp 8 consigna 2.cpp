#include <iostream>
#include <string>
using namespace std;
int contarPalabras(string cadena) {
    int palabras = 0;
    bool enPalabra = false;
    for (int i = 0; i < cadena.length(); i++) {
        char c = cadena[i]; 
        if (c != ' ') {  //para detectar los espacios asi calcular mejor lass palabras
            if (!enPalabra) {
                palabras++;
                enPalabra = true;
            }
        } else {
            enPalabra = false;
        }
    }
    return palabras;
}
int main() {
    string cadena;
    cout << "Ingresa una cadena de texto: ";
    getline(cin, cadena);
    int totalPalabras = contarPalabras(cadena);
    cout << "La cadena contiene " << totalPalabras << " palabras." << endl;
    return 0;
}
