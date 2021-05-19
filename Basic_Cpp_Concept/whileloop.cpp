#include <iostream>
using namespace std;

int main()
{

    int n;

    while (n > 0)
    {
        cin >> n;
        if (n > 1)
        {
            cout << n << " is not negative or 0 " << endl;
        }
        else
        {
            cout << n << " is negative or 0 " << endl;
        }
    }

    return 0;
}