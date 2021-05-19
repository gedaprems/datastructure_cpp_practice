#include <iostream>
using namespace std;

int main(){

    int n,c=0,w=0;
    cin>>n;

    while(n>0||w>2){
        if(n>0&&w>=3){
            c+=2;
            w-=1;
            n--;            
        }
        else if(n>0){
            c+=1;
            w+=1;
            n--;
        }
        else if(w>=3){
            c+=1;
            w-=2;
        }
        
        
    }

    cout<<"Total chocolate buy is "<<c<<endl;

    return 0;
}