#include <iostream> 
using namespace std;
int main(){


    int n,temp=0,result=0;
    cin>>n;

    while(n!=0){


        temp =temp + n%2;        
        n= n/2;
        if(n!=0){
            temp = temp * 10;
        }

    }

    // while(temp!=0){

    //     result = result + temp%10;        
    //     temp = temp/10;
    //     if(temp!=0){
    //         result = result * 10;
    //     }

    // }

    cout<<temp<<endl;


    return 0;
}