#include <iostream>
using namespace std;

int addition(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

double divide(int a, int b)
{
    if (b == 0)
    {
        cout << "division by zero not possible " << endl;
        return 0.0;
    }

    return (double)a / b;
}

int mod(int a, int b)
{
    return a % b;
}

int exponent(int a, int b)
{
    int num = 1;
    for (int i = 0; i < b; i++)
    {
        num = num * a;
    }
    return num;
}

int factorial(int a)
{

    if (a < 0)
    {
        cout << "no factorial of negative numbers " << endl;
        return -1;
    }

    int fact = 1;
    for (int i = a; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}

int main(int argc, char const *argv[])
{
    bool doagain = true;
    while (doagain)
    {
        int a, b, m;
        int choice;
        cout << "enter 1 for addition  , 2 for subtraction, 3 for multiply , 4 for divide , 5 for modulus , 6 for exponent , 7 for factorial : " << endl;
        cin >> choice;

        if (choice >= 1 && choice <= 6)
        {

            cout << "enter the first number : " << endl;
            cin >> a;

            cout << "enter the second number : " << endl;
            cin >> b;
        }
        else
        {
            cout << "enter the number for which you want factorial : " << endl;
            cin >> m;
        }

        switch (choice)
        {
        case 1:
            cout << addition(a, b) << endl;
            break;

        case 2:
            cout << subtraction(a, b) << endl;
            break;

        case 3:
            cout << multiply(a, b) << endl;
            break;

        case 4:
            cout << divide(a, b) << endl;
            break;

        case 5:
            cout << mod(a, b) << endl;
            break;

        case 6:
            cout << exponent(a, b) << endl;
            break;

        case 7:

            cout << factorial(m) << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
            break;
        }

        int n;
        cout << "do you want the calculator again 1 for yes and 2 for no : " << endl;
        cin >> n;

        if (n == 1)
        {
            doagain = true;
        }
        else
        {
            doagain = false;
        }
    }

    return 0;
}
