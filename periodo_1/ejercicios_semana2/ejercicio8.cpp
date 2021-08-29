#include <iostream>
using namespace std;

int main() {

    int x = 5;
    int y = 1;
    cout << (x <= y) << "\n";  // returns 0 (false) because 5 is neither less than or equal to
    cout << (x >= y) << "\n";  // returns 1 (true)  because five is greater than, or equal, to
    cout << (x < y)  << "\n";  // returns 0 (false) because 5 is not less than 3
    cout << (x > y)  << "\n";  // returns 1 (true)  because 5 is greater than 3
    cout << (x != y) << "\n";  // returns 1 (true)  because 5 is not equal to 3
    cout << (x == y) << "\n";  // returns 0 (false) because 5 is not equal to 3

    std::cin.get();


    return 0;


}