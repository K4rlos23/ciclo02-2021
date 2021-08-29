#include <iostream>
#include <cmath>

using namespace std;

int main (){
    bool  res = true;
    int i = 0;
    string op;
    int numero;
    double promedio;
    double suma;
    while (res)
    {
        cout << "Ingrese un Numero \n";
        cin >> numero;
        suma = suma + numero;
        cout << "Ingresa (s) para ingresar un nuevo numero o (n) si quieres salir: " << endl;
        cin >> op;
        if (op == "s")
        {
            res = true;
        }
        else if (op == "n")
        {
            res = false;
        }else{
            cout << " Ingresa una opcion valida " << endl;
            std::cout << "Preciona Enter para regresar. . ." << std::endl;
            cin.ignore();
            cin.get();
        }
        i++;
    }
    promedio = (double)suma / i;
    cout << " El promedio de los numeros es : " << promedio << endl;

    return 0;
}
