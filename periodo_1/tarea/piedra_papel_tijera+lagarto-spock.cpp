#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    cout << " Carlos Alberto Pérez Rivas \n";
    cout << " PR103315 \n";
    while (true)
    {
        int movJug;
        string op;
        cout << " Juguemos a Piedra, Papel 0 Tijera + Lagarto - Spock, selecciona tu movimiento \n";
        cout << " 1. Piedra \n 2. Papel \n 3. Tijera \n 4. Lagarto \n 5. Spock \n";
        cin >> movJug;
        srand(time(0));
        string movComp;
        int numMov = rand() % 5 + 1;
        switch(numMov) {
            case 1:
                movComp = "Piedra";
                break;
            case 2:
                movComp = "Papel";
                break;
            case 3:
                movComp = "Tijera";
                break;
            case 4:
                movComp = "Lagarto";
                break;
            case 5:
                movComp = "Spock";
                break;

        }
        cout << " La computadora escogio: " << movComp << endl;
        if (movJug == numMov){
            cout << " Empate \n";
        } else if ( (movJug == 3) && (numMov == 2) ){
            cout << " Ganaste \n";
        } else if ( (movJug == 2) && (numMov == 1) ){
            cout << "Ganaste \n";
        } else if ( (movJug == 1) && (numMov == 4) ){
            cout << " Ganaste \n";
        } else if ( (movJug == 4) && (numMov == 5) ){
            cout << " Ganaste \n";
        } else if ( (movJug == 5) && (numMov == 3) ){
            cout << " Ganaste \n";
        } else if ( (movJug == 3) && (numMov == 4) ){
            cout << " Ganaste \n";
        } else if ( (movJug == 4) && (numMov == 2) ){
            cout << " Ganaste \n";
        } else if ( (movJug == 2) && (numMov == 5) ){
            cout << " Ganaste \n";
        } else if ( (movJug == 5) && (numMov == 1) ){
            cout << " Ganaste \n";
        } else if ( (movJug == 1) && (numMov == 3) ){
            cout << " Ganaste \n";
        } else {
            cout << " Perdiste \n";
        }

        cout << " Ingresa (s) si quieres volver a jugar o (n) si quieres salir: " << endl;
        cin >> op;
        if (op == "s")
        {
            true;
        }
        else if (op == "n")
        {
            break;
        }else{
            cout << " Ingresa una opcion valida " << endl;
            std::cout << "Preciona Enter para regresar al menu. . ." << std::endl;
            cin.ignore();
            cin.get();
        }
        
    }
    return 0;
}