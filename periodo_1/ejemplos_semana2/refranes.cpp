#include <iostream>

int main() {
    int num;

    std::cout << "Ingrese un numero entre 1 y 3:";
    std::cin >> num;

    switch (num) {
    case 1:
        std::cout << "Mas vale pajaro en mano, que cien volando.\n";
        break;
    case 2:
        std::cout << "Ojos que no ven, corazon que no siente.\n";
        break;
    case 3:
        std::cout << "No hay mal que por bien no venga.\n";
        break;
    default:
        std::cout << "Debe ingresar 1, 2 0 3.\n";
        break;
    }

    return 0;
} 