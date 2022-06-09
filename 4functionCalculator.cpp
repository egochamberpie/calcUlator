#include <iostream>
#include <iomanip>
using namespace std;

float var1;
float var2;
char operation;
float result;

int main()
{
    cout << "Enter the first number:\n";
    cin >> var1;
    cout << "\nEnter the operator:\n";
    cin >> operation;
    cout << "\nEnter the second number:\n";
    cin >> var2;


    if (operation == '+') {
        result = var1 + var2;
        cout << "\n" << var1 << " " << operation
        << " " << var2 << " equals " << setprecision(4)
        << result << endl;
    }

    else if (operation == '-') {
        result = var1 - var2;
        cout << "\n" << var1 << " " << operation
        << " " << var2 << " equals " << setprecision(4)
        << result << endl;
    }

    else if (operation == '/') {
        result = var1 / var2;
        cout << "\n" << var1 << " " << operation
        << " " << var2 << " equals " << setprecision(4)
        << result << endl;
    }

    else if (operation == '*') {
        result = var1 * var2;
        cout << "\n" << var1 << " " << operation
        << " " << var2 << " equals " << setprecision(4)
        << result << endl;
    }

    else {
        cout << "\nInvalid Operator" << endl;
    }


    return 0;
}
