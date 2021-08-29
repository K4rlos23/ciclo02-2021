#include <iostream>

using namespace std;

int main() {
    int i = 0;
    double numero;
    bool op = true;
    while(op){
        cout << "Ingrese un Numero entre 0 y 10 \n";
        cin >> numero;
        if(numero > 10 || numero < 0){
            cout << " Ingrese un numero en el rango de 0 a 10 " << endl;
            std::cout << "Preciona Enter para regresar. . ." << std::endl;
            cin.ignore();
            cin.get();
        }else{
            op = false;
        }
        i++;
    }
    cout << "El numero ingresado es: " << numero << endl;

    return 0;
}