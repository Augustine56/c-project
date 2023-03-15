#include <iostream>

using namespace std;

int main()
{
    float fahrenheit, celsius; // First we declared both variables

   cout << "Enter temperature in Fahrenheit: "; // Here we are requesting a fahrenheit value from the user
   cin >> fahrenheit; // here requesting value from user using the cin syntax then store the value in the fahrenheit variable

   celsius = (fahrenheit - 32) * 5/9; // this is a simple maths for converting fahrenheit to celsius and storing value in the celsius variable

   cout << "Temperature in Celsius is: " << celsius << endl; // Here we printed celsius on the console

    return 0;
}
