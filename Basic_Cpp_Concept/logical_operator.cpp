#include <iostream>
using namespace std;

int main(){

    int x;
    cin>>x;

    if(x%2==0 && x%3==0){
        cout<<"x is divisible by 2 as well as 3"<<endl;
    }
    else if (x%2==0)
    {
        cout<<"x is divisible by 2"<<endl;
    }
    else if (x%3==0)
    {
        cout<<"x is divisible by 3"<<endl;
    }
    else{
        cout<<"x is not divisible by 2 as well as 3"<<endl;
    }
    

    return 0;
}