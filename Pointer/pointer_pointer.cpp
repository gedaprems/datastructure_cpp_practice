#include <bits/stdc++.h>
using namespace std;

int main(){

    int a=10;
    int *p = &a; 
    int **q = &p;
    int ***r = &q;
    int ****s = &r;
    int *****t = &s;

    cout<<a<<endl;
    cout<<p<<endl;
    cout<<(p-1)<<endl;
    cout<<q<<endl;
    cout<<r<<endl;
    cout<<s<<endl;
    cout<<*****t<<endl;

    return 0;
}