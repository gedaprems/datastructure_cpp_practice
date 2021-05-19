#include <iostream>
using namespace std;

int main()
{

    int num1, num2, i, check = 0;
    cin >> num1 >> num2;

    for (i = num1; i <= num2; i++)
    {
        int j;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                {
                    break;
                }
        }
        if (i==j)
            {
                cout << i << endl;
            }
    }

    return 0;
}