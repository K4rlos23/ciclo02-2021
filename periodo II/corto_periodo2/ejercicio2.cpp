#include <iostream>

using namespace std;

int main()
{
    int *p;
    int i;
    int k;
    i = 42;
    k = i;
    p = &i;

    // sentencia que cambia el valor a 75
   // Respuesta es  *p = 75; 

    cout << " p: " << p << endl;
    cout << " i: " << i << endl;
    cout << " k: " << k << endl;

    return 0;
}
