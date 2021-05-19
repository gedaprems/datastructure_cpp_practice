#include <bits/stdc++.h>
using namespace std;

int main(){

    int a=10; 
    int *ptr;
    ptr = &a;

    cout<<*ptr<<" "<<ptr<<endl;

    *ptr = 20;

    cout<<a<<endl;

    return 0;
}