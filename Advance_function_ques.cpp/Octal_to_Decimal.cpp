#include <iostream>
#include <math.h>
using namespace std;

int octdec(int n)
{

    int dec = 0,i=0;

    while (n != 0)
    {
        dec= dec + n%10 * pow(8,i);
        n=n/10;
        i++;
    }

    return dec;
}

int main()
{

    int n;
    cin >> n;

    cout<<"Decimal :"<<octdec(n)<<endl;

    return 0;
}