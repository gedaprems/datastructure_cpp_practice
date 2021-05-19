#include <iostream>
using namespace std;

int main()
{

    int i;

    //For loop for printing number 1 to 100 in which divisible by 3 is not printed

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        cout << i << " ";
    }

    return 0;
}