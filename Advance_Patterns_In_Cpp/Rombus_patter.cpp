/*
Rombus Pattern

    * * * * * *
   * * * * * * 
  * * * * * *
 * * * * * *
* * * * * *

OUTPUT: 

*/


#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=n; i>0 ; i--){
        for(int j=i+n-1; j>0; j--){
            if(j>n){
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }

    return 0;
}