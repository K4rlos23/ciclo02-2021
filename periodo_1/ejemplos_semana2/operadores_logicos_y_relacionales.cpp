#include <iostream>

int main(){
    int i = 10, j = 11;
    bool b1 = true, b2 = false;

    if (i < j) { std::cout << "i < j\n";}
    if (i <= j) { std::cout << "i <= j\n";}
    if (i != j) { std::cout << "i != j\n";}
    if (i == j) { std::cout << "esto no se ejecutara\n";}
    if (i >= j) { std::cout << "esto no se ejecutara\n";}
    if (i > j) { std::cout << "esto no se ejecutara\n";}

    if (b1 && b2) { std::cout << "esto no se ejecutara\n";}
    if (!(b1 && b2)) { std::cout << "!(b1 && b2) es verdadero\n"; }
    if (b1 || b2) { std::cout << "b1 || b2 es verdadero\n"; }
    return 0;


}