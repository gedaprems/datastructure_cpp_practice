#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{

    int n, m, sum;
    cin >> n >> m;

    sum=add(n, m);

    cout << sum << endl;
    return 0;
}