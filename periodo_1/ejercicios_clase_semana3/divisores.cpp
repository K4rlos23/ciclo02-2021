#include <iostream>
#include <cstdlib>


using namespace std;


int i=1; 
int numero;
div_t resultado;

int main(){
cout << "Ingrese un numero para calcular sus divisores" << endl;
cin >> numero;
cout << "Los divisores de " << numero << " son:" << endl;
while (i<=numero) { 
    resultado=div(numero,i); 
if (resultado.rem==0){
    cout << i << endl;
}
else{

}

    i++; 

}

return 0;

}