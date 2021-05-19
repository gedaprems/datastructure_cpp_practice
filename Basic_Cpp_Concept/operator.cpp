#include <iostream>
using namespace std;

int main()
{

    // int i=1;
    // i= i++ + ++i;
    // cout<<i<<endl;

    // int i = 1, j = 2;
    // int k = i + j + i++ + j++ + ++i + ++j;
    // cout << i << " " << j << " " << k << endl;

    // int i=0;
    // i = i++ - --i + ++i - i--;
    // cout<<i<<endl;

    int i = 10, j = 20, k;

    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout << i << endl;
    cout << j << endl;
    cout << k << endl;

    return 0;
}