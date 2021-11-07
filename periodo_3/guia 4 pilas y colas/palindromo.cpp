#include <iostream>
#include <stack>
#include <queue>

using namespace std;

bool es_palindromo(string cadena){
    stack<char> pila;
    queue<char> cola;
    char elemento;
    int coincidencias = 0;
    for (int i = 0; i < cadena.length(); i++)
    {
        pila.push(cadena.at(i));
        cola.push(cadena.at(i));
    }
    while (pila.size() > 0 && cola.size() > 0)
    {
        if(pila.top() == cola.front()){
            coincidencias++;
        }
        pila.pop();
        cola.pop();
    }
    if(coincidencias > 0){
        return true;
    }else{
        return false;
    }
}

string removeCharacter(string p){
    string nueva = "";
    for (int i = 0; i < p.length(); i++)
    {
        if(isalpha(p.at(i))){
            nueva.append(1, p.at(i));
        }
    }
    return nueva;
}

int main(){
    string palabra;
    string limpio;
    cout << "Ingrese una palabra: " << endl;
    getline(std::cin, palabra);
    limpio = removeCharacter(palabra);
    if(es_palindromo(limpio)){
        cout << "La palabra: " << limpio << " es un palindromo" << endl;
    }else{
        cout << "La palabra: " << limpio << " No es palindromo" << endl;
    }
    return 0;
}