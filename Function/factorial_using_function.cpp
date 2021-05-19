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

    int n;
    cin>>n;

    cout<<fac(n)<<endl;

    return 0;
}