#include <iostream>
#include <cstdlib> // Numero aleatorios
#include <ctime> // Hora

int main(){
    // Genera un numero aleatorio entre 1 y 10
    int magico;       // numero magico
    int intento;      // intento del usuario
    srand(time(0));
    magico = rand() % 10 + 1;

    // da al usuario la oportunidad de adivinar el numero
    std::cout << " Adivine el numero: ";
    std::cin >> intento;

    if (magico == intento){
        std::cout << " correcto\n";
    }

    return 0;

}