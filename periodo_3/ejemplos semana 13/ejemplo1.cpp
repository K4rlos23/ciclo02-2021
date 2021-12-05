#include <iostream>
#include <stack>

using namespace std;
int main() {
    stack <int> P;
    P.push(1);
P.push(2);
P.pop();
P.push(3);
P.push(4);
P.pop();
P.pop();
P.pop();
P.push(5);
P.pop();
    cout << "Tamanio de la pila o stack: " << P.size() << endl;
    cout << "Parte superior o top del stack: " << P.top() << endl;
    stack <int> s1;
    s1 = P;
    while (!s1.empty()){
        cout << s1.top() << endl;
        s1.pop();
    }
    return 0;
}