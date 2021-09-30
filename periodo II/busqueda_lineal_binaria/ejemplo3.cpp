#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int,5> numeros = {1, 2, 3, 4, 5};
    int inf = 0;                        // indice inferior
    int sup = (int) numeros.size() -1;  // indice superior
    int med;                            // indice central
    int valor = 4, indice = -1;         // valor a buscar
    while (inf <= sup) {
        // valor esta en numeros[inf..sup] 0 no existe
        med = inf + (sup - inf)/2;
        if      (valor < numeros[med]) sup = med -1;
        else if (valor > numeros[med]) inf = med +1;
        else {
            indice = med;
            break;
        }
    }

    cout << "El valor " << valor << "esta en el indice: " << indice << endl;

    return 0;
    
}