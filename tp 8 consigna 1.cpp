#include <iostream>
using namespace std;
float sumar(float a, float b) {
    return a + b;
}
float restar(float a, float b) {
    return a - b;
}
float multiplicar(float a, float b) {
    return a * b;
}
float dividir(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "No se puede dividir por 0" << endl;
        return 0;
    }
}
int main() {
    float a, b;
    int opcion;
    cout << "Calculadora:" << endl;
    cout << "Ingresa el primer numero: ";
    cin >> a;
    cout << "Ingresa el segundo numero: ";
    cin >> b;
    cout << "1. Sumar?\n2. Restar?\n3. Multiplicar?\n4. Dividir?" << endl;
    cout << "Elige una operacion: ";
    cin >> opcion;
    switch(opcion) {
        case 1:
            cout << "Resultado: " << sumar(a, b) << endl;
            break;
        case 2:
            cout << "Resultado: " << restar(a, b) << endl;
            break;
        case 3:
            cout << "Resultado: " << multiplicar(a, b) << endl;
            break;
        case 4:
            cout << "Resultado: " << dividir(a, b) << endl;
            break;
        default:
            cout << "Opción icorrecta" << endl;
    }
    return 0;
}
