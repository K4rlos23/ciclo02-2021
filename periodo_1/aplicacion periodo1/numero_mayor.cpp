#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int numero1;
    int numero2;
    int numero3;
    int numero4;
    int numero5;
    int numeroMayor;

    cout << "Ingrese los Numeros \n";
    cin >> numero1;
    cin >> numero2;
    cin >> numero3;
    cin >> numero4;
    cin >> numero5;

    if (numero1 > numero2 && numero1 > numero3 && numero1 > numero4 && numero1 > numero5)
    {
        numeroMayor = numero1;
    }
    else
    {
        if (numero2 > numero1 && numero2 > numero3 && numero2 > numero4 && numero2 > numero5)
        {
            numeroMayor = numero2;
        }
        else
        {
            if (numero3 > numero1 && numero3 > numero2 && numero3 > numero4 && numero3 > numero5)
            {
                numeroMayor = numero3;
            }
            else
            {
                if (numero4 > numero1 && numero4 > numero2 && numero4 > numero3 && numero4 > numero5)
                {
                    numeroMayor = numero4;
                }
                else
                {
                    numeroMayor = numero5;
                }
            }
        }
        cout << "El numero mayor es : " << numeroMayor << endl;
        return 0;
    }
}