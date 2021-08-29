#include <iostream>

using namespace std;

int main(){
    string s = "¡Hola Mundo!";
    int longitud = s.length();  // longitud 12
    char c = s.at(1);           // caracter h
    cout << c << endl;
    return 0;
}