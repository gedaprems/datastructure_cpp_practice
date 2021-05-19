#include <iostream>
using namespace std;

int main()
{

    char choice;
    cin >> choice;

    switch (choice)
    {
    case 'a':
        cout << "Hello" << endl;
        break;
    case 'b':
        cout << "Hola" << endl;
        break;
    case 'c':
        cout << "Namastay" << endl;
        break;
    case 'd':
        cout << "Caio" << endl;
        break;
    case 'e':
        cout << "Salut" << endl;
        break;

    default:
        cout << "I am still learning new language" << endl;
        break;
    }

    return 0;
}