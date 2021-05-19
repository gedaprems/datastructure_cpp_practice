#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter two numbers :";
    cin >> a >> b;

    char op;
    cout << "Enter Operation + | - | * | / | % :";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;

    default:
        cout << "enter valid operator "<< endl;
        break;
    }
    return 0;
}