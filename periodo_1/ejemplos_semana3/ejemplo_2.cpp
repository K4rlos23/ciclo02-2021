#include <iostream>

using namespace std;

int main() {
    int contador = 1;                   // Inicializacion
    while (contador < 0) {              // Condicion 
        cout << contador << "\n";
        contador--;                      // Actualizacion
    }
    return 0;

    
}