#include <iostream>
using namespace std;

int main(){

    int a=40,b=40,c=40;

    /*if(a>b){
        if(a>c){
            cout<<"A is greatest number"<<endl;
        }else{
            cout<<"C is greatest number"<<endl;
        }
    }else{
        if(b>c){
            cout<<"B is greatest number"<<endl;
        }else{
            cout<<"C is greatest number"<<endl;
        }
        return 0;
    }*/

    if(a>b){
        if(a>c){
            if(a==b){
                cout<<"Both A and B is greatest number"<<endl;
            }else{
                cout<<"A is greatest number"<<endl;
            }
            
        }else{
            if(a==c){
                cout<<"Both A and C is greatest number"<<endl;
            }else{
                cout<<"C is greatest number"<<endl;
            }
        }
    }else{
        if(b>c){
            cout<<"B is greatest number"<<endl;
        }else if(b==c){
            cout<<"Both B and C is greatest number"<<endl;
        }else{
            cout<<"C is greatest number"<<endl;
        }
        return 0;
    }



}