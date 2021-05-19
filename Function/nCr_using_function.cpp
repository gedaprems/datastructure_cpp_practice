#include <iostream>
using namespace std;

int fac(int n){

    int result=1;
    while(n>0){
        result = result *n;
        n--;
    }    

    return result;
}

int main(){

    int n,r;
    cin>>n>>r;

    cout<<"nCr: "<<fac(n)/(fac(r)*fac(n-r))<<endl;

    return 0;
}