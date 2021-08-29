#include<iostream>
using namespace std;
main() {
     string s;
     string digitos;
     string cadenas;
  cout << "Ingrese la cadena" << endl;
  cin >> s;
   for(int i = 0; i<s.length(); i++) {
        s.at(i);
        if(isdigit(s.at(i)) != 0){
          digitos = digitos + s.at(i)+ " ";
        }else{
          cadenas = cadenas + s.at(i)+ " ";
        }
   }
  cout << "Los digitos son: "<< digitos << endl;
  cout << "Son caracteres: "<< cadenas << endl;
   return 0;
}