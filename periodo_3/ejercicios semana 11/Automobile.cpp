#include <iostream>

using namespace std;

class Automobile {
public:
Automobile();
void Input();
void set_NumDoors( int doors );
void Display() const;
int get_NumDoors() const;
private:
string Make;
int NumDoors;
int NumCylinders;
int EngineSize;
};

Automobile::Automobile()
{
NumDoors = 0;
NumCylinders = 0;
EngineSize = 0;
}
void Automobile::Display() const
{
cout << "Make: " << Make
<< ", Doors: " << NumDoors
<< ", Cyl: " << NumCylinders
<< ", Engine: " << EngineSize
<< endl;
}

void Automobile::Input()
{
cout << "Enter the make: ";
cin >> Make;
cout << "How many doors? ";
cin >> NumDoors;
cout << "How many cylinders? ";
cin >> NumCylinders;
cout << "What size engine? ";
cin >> EngineSize;
}
