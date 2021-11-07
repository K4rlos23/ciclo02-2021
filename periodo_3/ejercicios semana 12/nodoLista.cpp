#include <iostream>

using namespace std;

class NodoLista {
    friend class ListaEnteros;
private:
    int item;
    NodoLista *siguiente;
public:
    NodoLista(int item) : item(item), siguiente(0) {}
};

class ListaEnteros{
private:
  int cuenta;
  NodoLista *cabeza;
  NodoLista* obtenerNodo(int indice);
public:
   ListaEnteros();
   ~ListaEnteros();
   ListaEnteros(const ListaEnteros &otra);
   bool estaVacia();
   int tamano();
   void insertar(int indice, int item);
   void adjuntar(int item);
   int obtener(int indice);
   bool contiene(int item);
   int remover(int indice);
};

if (indice < 0 || indice >= this->cuenta)
throw "Indice fuera de rango";
NodoLista *actual = this->cabeza;
for (int i = 0; i < indice; i++)
actual = actual->siguiente;
cabeza return actual;

// Esta el item en la lista?
// Recorre toda la lista con un bucle for, se detiene si halla un valor
bool ListaEnteros::contiene(int item) {
for (NodoLista *actual = this->cabeza; actual != 0; actual = actual->siguiente)
if (actual->item == item)
return true;
return false;
}

// Inicializar la lista
ListaEnteros::ListaEnteros() {
this->cuenta = 0;
this->cabeza = 0;
}
// Comprobar si la lista esta vacia
bool ListaEnteros::estaVacia() {
return this->cuenta == 0;
}

// Devolver cantidad de elementos en la lista
int ListaEnteros::tamano() {
return this->cuenta;
}
int ListaEnteros::obtener(int indice) {
return this->obtenerNodo(indice)->item;
}

void ListaEnteros::insertar(int indice, int item) {
NodoLista *nuevoNodo = new NodoLista(item);
if (indice == 0) {
nuevoNodo->siguiente = this->cabeza;
this->cabeza = nuevoNodo;
}
this->cuenta++;
}

void ListaEnteros::insertar(int indice, int item) {
NodoLista *nuevoNodo = new NodoLista(item);
if (indice != 0) {
NodoLista *prev = obtenerNodo(indice - 1);
nuevoNodo->siguiente = prev->siguiente;
prev->siguiente = nuevoNodo;
}
this->cuenta++;
}

void ListaEnteros::insertar(int indice, int item) {
    // validar indice
    if (indice < 0 || indice > this->cuenta)
        throw "Indice fuera de rango";

    // obtener un puntero al nodo
    NodoLista *nuevoNodo = nwe NodoLista(item);

    // si es el primer elemento, actualizar cabeza
    if (indice == 0) {
        nuevoNodo->siguiente = this->cabeza;
        this->cabeza = nuevoNodo;
    // si no, identificar el nodo previo y actualizar enlaces
   } esle {
       NodoLista *prev = obtenerNodo(indice -1);
       nuevoNodo->siguiente = pev->siguiente;
       prev->siguiente = nuevoNodo;
   }

   this->cuenta++;
}

void ListaEnteros::adjuntar(int item) {
    this->insertar(this->cuenta, item);
}

int ListaEnteros::remover(int indice){
    // valor del indice
    if (indice < 0 || indice >= this->cuenta)
    throw "Indice fuera de rango";

    NodoLista *nodoEliminar = obtenerNodo(indice);
    int valor = nodoEliminar->item;
    if (indice == 0) {
        this->cabeza = nodoEliminar->siguiente;
    } else {
        NodoLista *prev = obtenerNodo(indice -1);
        prev->siguiente = nodoEliminar->siguiente;
    }
    delete nodoEliminar;
    this->cuenta--;
    return valor;
}