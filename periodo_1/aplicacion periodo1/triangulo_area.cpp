#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main(){
    int lado1;
    int lado2;
    int lado3;
    int base;
    double area;

    cout << " Ingrese los lados del Tringulo\n";
    cin >> lado1;
    cin >> lado2;
    cin >> lado3;

    if(lado1 == lado2 && lado2 == lado3){
        cout << " El triangulo es Equilatero\n";
        area = (double)(lado1 * lado2) / 2;
        cout << " El area del triangulo es : " << area << endl;

    }else if(lado1 == lado2 || lado3 == lado2 || lado1 == lado3){
        cout << " El triangulo es Isosceles\n";

        if(lado1 < lado2 && lado1 < lado3){
            base = lado1;
            area = (double)(base * lado2) / 2;
        }else{
            if(lado2 < lado1 && lado2 < lado3){
                base = lado2;
                area = (double)(base * lado1) / 2;
            }else{
                base = lado3;
                area = (double)(base * lado1) / 2;
            }
        }
        cout << " El area del triangulo es : " << area << endl;

    }else if(lado1 != lado2 && lado3 != lado2 && lado1 != lado3){
        cout << " El triangulo es Escaleno\n";

         double sp = (double)(lado1 + lado2 + lado3) / 2 ;
          area = sqrt((double)sp * ((double)sp - lado1) * ((double)sp - lado2) * ((double)sp - lado3));
        
        cout << " El area del triangulo es : " << area << endl;
    }

    return 0;
}