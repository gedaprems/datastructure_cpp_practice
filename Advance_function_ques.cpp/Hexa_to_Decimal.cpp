#include <bits/stdc++.h>
using namespace std;

int hexdec(string n)
{

    int dec = 0, size_n = n.size(), x = 1;

    for (int j = size_n - 1; j >= 0; j--)
    {

        if (n[j] >= '0' && n[j] <= '9')
        {
            dec = dec + (n[j] - '0') * x;
           
        }
        else if (n[j] >= 'A' && n[j] <= 'F')
        {
            dec = dec + ((n[j] - 'A') + 10) * x;
           
        }
        else{
            return -1;
        }
        x = x * 16;
    }

    return dec;
}

int main()
{

    string n;
    cin >> n;

    if(hexdec(n)>-1)
    {
    cout << hexdec(n) << endl;
    }
    else{

        cout<<" Not a valid hexadecimal"<<endl;

    }

    return 0;
}