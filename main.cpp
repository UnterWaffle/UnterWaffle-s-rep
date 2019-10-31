#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int func;
    int firstDigit, secondDigit;
    cout << "Please, enter the first digit: ";
    cin >> firstDigit;
    cout << "Please, enter the second digit: ";
    cin >> secondDigit;
    cout << "Please, select the function: \n1-for '+', \n2-for '-' \n3-for'*' \n4-for'/' \n5-to take a module" << endl;
    cin >> func;
    switch (func){
        case 1:
    {
        cout << firstDigit << "+" << secondDigit << "=" << firstDigit + secondDigit << endl;
        break;
    }
    case 2:
    {
        cout << firstDigit << "-" << secondDigit << "=" << firstDigit - secondDigit << endl;
        break;
    }
    case 3:
    {
        cout << firstDigit << "*" << secondDigit << "=" << firstDigit * secondDigit << endl;
        break;
    }
    case 4:
    {
        cout << firstDigit << "/" << secondDigit << "=" << firstDigit / secondDigit << endl;
        break;
    }
    case 5:
    {
        cout << firstDigit << " mod(" << secondDigit << ")=" << firstDigit % secondDigit << endl;
        break;
    }
    default:
        cout << "Sorry, something went wrong..." << endl;
}
    cout << "End of program!" << endl;
    return 0;
}
