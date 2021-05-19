#include <bits/stdc++.h>
using namespace std;

//Call by value

// void swap(int a,int b){

//     int temp=a;
//     a=b;
//     b=a;
//     return;
// }

// Call by refernce
void swap(int *a,int *b){

    int temp= *a;
    *a=*b;
    *b=temp;
    return;
}


int main(){

    int a=10;
    int b=20;
    
    // swap(a,b);
    swap(&a,&b);
    

    cout<<a<<" "<<b<<endl;

    return 0;
}