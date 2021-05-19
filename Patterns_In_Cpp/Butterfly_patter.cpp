/*
Output:
*             *
* *         * *
* * *     * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *
*/

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    //For loop for upper part

    for (int i = 1; i <=  n; i++)
    {
        for (int j = 1; j <= (2 * n); j++)
        {            
                if (j <= i || j > (2 * n) - i)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
        }
        cout << endl;
    }

    //for loop for lower part 
    for (int i = n; i >=  1; i--)
    {
        for (int j = 1; j <= (2 * n); j++)
        {            
                if (j <= i || j > (2 * n) - i)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
        }
        cout << endl;
    }

    //key changes the incrementation of i is reverse in lower part


    return 0;
}