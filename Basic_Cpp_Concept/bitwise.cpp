#include <iostream>
using namespace std;

int main(){

    int a=5 , b=4, c;

    //and operator

    c = a&b;
    cout<<c<<endl;

    //Or operator

    c = a|b;
    cout<<c<<endl;

    //xor operator

    int d=10, e=12;
    cout<<(c^d)<<endl;

    //ones complement

    int f=5;
    cout<<(~f)<<endl;

    //left shift operator 

    int g=5;
    cout<<(g<<1)<<endl;

    //right shift operator

    int h=5;
    cout<<(h>>1)<<endl;

    //NOTE : a<<n : a*2^n | a>>n : a/2^n

    

    return 0;
}