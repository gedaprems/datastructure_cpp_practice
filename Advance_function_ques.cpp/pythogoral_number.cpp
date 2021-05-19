// This program is shorted using two function. The first functions find the greater one and second send the result.

#include <iostream>
using namespace std;
bool return_check(int a, int b, int c)
{
    if (a * a == (b * b + c * c))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool check(int a, int b, int c)
{

    if (a > b && a > c)
    {
        return return_check(a, b, c);
    }
    else if (b > a && b > c)
    {
        return return_check(b, a, c);
    }
    else if (c > a && c > b)
    {
        return return_check(c, a, b);
    }
    else
    {
        return false;
    }
}

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    if (check(a, b, c))
    {
        cout << "All are pythagorian triplet" << endl;
    }
    else
    {
        cout << "All are not pythagorian triplet" << endl;
    }

    return 0;
}