#include <iostream>
using namespace std;
float bytesakilobytes(float bytes) {
    return bytes / 1024;
}
float terabytesamegabytes(float terabytes) {
    return terabytes * 1024 * 1024;
}
float gigabytesapetabytes(float gigabytes) {
    return gigabytes / (1024 * 1024);
}
int main() {
    int opcion;
    float cantidad;
    cout << "Bienbenido al conversor de unidades de almacenamiento, uwu:" << endl;
    cout << "1. Bytes a Kilobytes" << endl;
    cout << "2. Terabytes a Megabytes" << endl;
    cout << "3. Gigabytes a Petabytes" << endl;
    cout << "Elija una conversion: ";
    cin >> opcion;
    cout << "Ingresa la cantidad: ";
    cin >> cantidad;
    switch(opcion) {
        case 1:
            cout << cantidad << " Bytes son " << bytesakilobytes(cantidad) << " Kilobytes." << endl;
            break;
        case 2:
            cout << cantidad << " Terabytes son " << terabytesamegabytes(cantidad) << " Megabytes." << endl;
            break;
        case 3:
            cout << cantidad << " Gigabytes son " << gigabytesapetabytes(cantidad) << " Petabytes." << endl;
            break;
        default:
            cout << "Opción incorrecta owo." << endl;
    }
    return 0;
}
