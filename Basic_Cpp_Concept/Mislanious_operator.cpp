#include <iostream>
using namespace std;

int main(){


    //sizeof
    cout<<sizeof(int)<<endl;

    //condition ? result 1 : result2

    int a=5 , b=10,c;
    c = (a>b) ? a-b : b-a; //returns modulas value
    cout<<c<<endl;

    //cast
    char d='b';
    cout<<int(d)<<endl;

    //comma(,)
    int e=(2,3,4); //print last value
    cout<<e<<endl;

    //&

    int f = 10;
    int *g;
    g = &f;
    
    cout<<(&f)<<endl; //print f address
    cout<<(*g)<<endl; //print f value

    //*

    return 0;
}