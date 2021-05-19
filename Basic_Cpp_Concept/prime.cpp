#include <iostream>
using namespace std;

int main(){

    int num,i=2,check=0;
    cin>>num;
    if(num==1 || num==0){
        cout<<num<<" is not prime"<<endl;
    }
    else{
        
    while(i!=num){
        if(num%i==0){
            cout<<num<<" is not prime"<<endl;
            check = 1;
            break;
        }

        i++;
    }
    if(check==0){
        cout<<num<<" is prime"<<endl;
    }
     
    }

    return 0;



}