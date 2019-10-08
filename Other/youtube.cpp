#include <iostream>
#include <cmath>
#include <climits>
#include <float.h>
#include <string> /// access to  a string class
#include <cstdlib> //to include random number
#include <ctime> //to include random number
#include <limits>
#include <vector> // to import the vector type 
using std::cin;
using std::cout;

double power(double base, int exponent)
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}
void print_pow(double base, int exponent)
{
    double myPower = power(base, exponent); ///pow() is a power function
    cout << base << " raised to the " << exponent << " power is " << myPower << std::endl;
}

int main() //main function
{
    ///adding strings
    std::string greeting;
    getline(std::cin, greeting); // add multiple words with cin function
    std::cout << greeting << std::endl;
    
    ///testing importing functions
    double base;
    int exponent;
    cout << "What is the base ?:";
    cin >> base;
    cout << "What is the exponent? :";
    cin >> exponent;
    print_pow(base, exponent);
}
