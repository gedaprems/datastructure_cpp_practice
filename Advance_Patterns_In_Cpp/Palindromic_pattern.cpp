/* 
Output: 

    1
   212
  32123
 4321234
543212345


*/


#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){

        for(int j=n-i; j>0; j--){
            cout<<"  ";
        }
        for(int k=i; k>0; k--){
            cout<<" "<<k;
        }
        for(int l=1; l<=i; l++){

            if(l!=1){
                cout<<" "<<l;
            }
        }


        cout<<endl;



    }
    return 0;
    
}