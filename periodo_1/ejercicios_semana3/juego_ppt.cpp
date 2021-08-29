#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

// prototipos
std::string generarMovimientoComputadora();
std::string obtenerMovimientoJugador();
void determinarGanador(std::string computadora, std::string jugador);
void procesarEntradaJugadorPiedra(std::string computadora);
void procesarEntradaJugadorPapel(std::string computadora);
void procesarEntradaJugadorTijera(std::string computadora);
void procesarEntradaJugadorLagarto(std::string computadora);
void procesarEntradaJugadorSpock(std::string computadora);
int main() {
        using namespace std;

    string movimientoComputadora;
    string movimientoJugador;

    movimientoJugador = obtenerMovimientoJugador();
    movimientoComputadora = generarMovimientoComputadora();
    determinarGanador(movimientoComputadora, movimientoJugador);

    return 0;
}

// implementacion
std::string generarMovimientoComputadora() { 
    std::string movimiento;
    int numeroAleatorio;

    // Genero numero aleatorio
    srand(time(0));
    numeroAleatorio = rand() % 5 + 1;

    switch (numeroAleatorio)
    {
    case 1:
        movimiento = "piedra";
        break;
    case 2:
        movimiento = "papel";
        break;
    case 3:
        movimiento = "tijera";
        break;
    case 4:
        movimiento = "lagarto";
        break;
    case 5:
        movimiento = "spock";
        break;
    }

    std::cout << "computadora :" << movimiento << "\n";

    return movimiento;
}

std::string obtenerMovimientoJugador() {
    using namespace std;
    string movimiento;

    cout << "piedra, papel o tijera + lagarto - spock (para terminar el juego, escriba salir)?";
    cin >> movimiento;

    return movimiento;
}

void determinarGanador(std::string computadora, std::string jugador) {
    if (computadora == jugador) {
        std::cout << "Empate !\n";
    }
    else if (jugador == "piedra") {
        procesarEntradaJugadorPiedra(computadora);
    }
    else if (jugador == "papel") {
        procesarEntradaJugadorPapel(computadora);
    }
    else if (jugador == "tijera") {
        procesarEntradaJugadorTijera(computadora);
    }
    else if (jugador == "lagarto"){
        procesarEntradaJugadorLagarto(computadora);
    }
    else if (jugador == "spock"){
        procesarEntradaJugadorSpock(computadora);
    }
    else {
        std::cout << "Entrada no valida. Ingrese piedra, papel o tijera.\n";
    }
}

void procesarEntradaJugadorPiedra(std::string computadora) {
    if (computadora == "papel") {
        std::cout << "La computadora gana. Papel cubre piedra.\n";
    }
    else if (computadora == "tijera") {
        std::cout << "Usted gana. Piedra rompe tijera.\n";
    }
    else if (computadora == "lagarto"){
        std:: cout << " Usted gana. Piedra aplasta lagarto.\n";
    }
    else if (computadora == "spock"){
        std::cout << "La computadora gana. spock desintegra la piedra\n";
    }
}

void procesarEntradaJugadorPapel(std::string computadora) {
    if (computadora == "tijera") {
        std::cout << "La computadora gana. tijera corta papel.\n";
    }
    else if (computadora == "piedra") {
        std::cout << "Usted gana. papel cubre piedra.\n";
    }
    else if (computadora == "lagarto"){
        std::cout << " La computadora gana. Lagarto devora el papel\n";
    }
    else if (computadora == "spock"){
        std::cout << "Usted gana. El papel desaprueba a spock\n";
    }
}

void procesarEntradaJugadorTijera(std::string computadora) {
    if (computadora == "piedra") {
        std::cout << "La computadora gana. Piedra rompe tijera.\n";
    }
    else if (computadora == "papel") {
        std::cout << "Usted gana. Tijera corta papel.\n";
    }
    else if (computadora == "lagarto"){
        std::cout << "Usted gana. Las tijeras decapitan al lagarto\n";
    }
    else if (computadora == "spock") {
        std::cout << "La computadora gana. Spock aplasta las tijeras\n";
    } 
}

void procesarEntradaJugadorLagarto(std::string computadora){
    if (computadora == "pierda"){
        std::cout << "Usted gana. Pierdra aplasta lagarto\n";
    }
    else if (computadora == "papel"){
        std::cout << "Usted gana. El lagarto devora el papel\n";
    }
    else if (computadora == "tijera"){
        std::cout << "La computadora gana. Las tijeras decapitan al lagarto\n";
    }
    else if (computadora == "spock"){
        std::cout << "Usted gana. El lagarto envenena a spock\n";
    }
}

void procesarEntradaJugadorSpock(std::string computadora){
    if (computadora == "pierda"){
        std::cout << "Usted gana. Spock desintegra la piedra\n";
    }
    else if (computadora == "papel"){
        std::cout << "La computadora gana. El papel desaprueba a spock\n";
    }
    else if (computadora == "tijera"){
        std::cout << "Usted gana. Spock aplasta las tijeras\n";
    }
    else if (computadora == "lagarto"){
        std::cout << "La computadora gana. El lagarto envenena a spock\n";
    }

}