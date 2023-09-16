#include <iostream>

int main() {
                 //Declare Variables
int dogAge;         
int years;
std::string name;
// Output questions for user
std::cout << "Enter your dogs name.\n"; 
std::cin >> name;           // input name
std::cout << "Enter your dogs age.\n";
std::cin >> years;         // input age in human years

dogAge = (years * 4) + 21; // equation for dog year transition
// Output information
std::cout << "My name is " << name << "! Ruff ruff,\n";
std::cout << "I am " << dogAge << " years old in human years.";


}