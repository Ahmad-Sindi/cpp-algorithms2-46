/* Algorithm Challenge & Problem Solving
 * 46 - Custom Absolute Value Function (Without Built-in abs)
 *
 * This program reads a floating-point number from the user and calculates its absolute value without using the built-in abs() function.
 *
 * The algorithm checks whether the number is positive or negative:
 * - If the number is positive, it is returned as-is.
 * - If the number is negative, it is multiplied by -1 to convert it to positive.
 *
 * This challenge helps reinforce conditional logic, function creation, and understanding of basic mathematical rules in C++.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

float MyabsluteFunction(float Number)
{
    // If the number is greater than zero, return it directly
    // because it is already a positive value
    if (Number > 0)
        return Number;

    // If the number is negative, multiply it by -1
    // to convert it to a positive value (math rule)
    else
        return Number * -1;
}

float ReadNumber()
{
    float Number;

    // Prompt the user to enter a number
    cout << "Enter a Number\n";
    cin >> Number;

    // Return the entered number to the caller
    return Number;
}

int main()
{
    // Read the number from the user and store it in a variable
    float Number = ReadNumber();

    // Display the result of the custom absolute value function
    cout << "My Absolute is " << MyabsluteFunction(Number) << endl;

    // Display the result using the built-in C++ abs function for comparison
    cout << "C++ Absolute is " << abs(Number) << endl;

    return 0;
}
