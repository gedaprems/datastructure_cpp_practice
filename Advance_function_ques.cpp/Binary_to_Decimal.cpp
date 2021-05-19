#include <iostream>
#include <math.h>
using namespace std;

int bindec(int n)
{

    int dec = 0,i=0;

    while (n != 0)
    {
        dec= dec + n%10 * pow(2,i);
        n=n/10;
        i++;
    }

    return dec;
}

int main()
{

    int n;
    cin >> n;

    cout<<"Decimal :"<<bindec(n)<<endl;

    return 0;
}