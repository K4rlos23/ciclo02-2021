#include <iostream>
#include <string>

using namespace std;

unsigned long long factorial(int n){
    unsigned long long factorial = 1;
    int numFact = n;
    int i = 1;
    while (i <= numFact){
        factorial *= i;
        cout << "numFact = " << i << "valor = " << factorial << endl;
        i++;
    }
    return factorial;

}

int main() {

    int n;
    cout << "Calcular el factorial de un numero: ";
    cin >> n;
    cout << n << "! " << factorial(n);
    return 0;

}