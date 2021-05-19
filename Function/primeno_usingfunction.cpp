#include <iostream>
#include <math.h>
using namespace std;

void prime(int a, int b){
    int flag;
    for(int i=a; i<=b; i++){
        
        flag=0;
        for(int j=2; j<=sqrt(i); j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<i<<endl;
        }
    }
}

int main(){

    int n,m;
    cin>>n>>m;

    prime(n,m);

    return 0;
}