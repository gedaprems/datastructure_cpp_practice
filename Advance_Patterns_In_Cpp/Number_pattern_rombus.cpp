/*
Output:
    1 2 3 4 5  
   1 2 3 4 5  
  1 2 3 4 5 
 1 2 3 4 5
1 2 3 4 5

*/
#include <iostream>
using namespace std;

int main(){

    int n,print;
    cin>>n;

    for(int i=n; i>0; i--){
        print=1;
        for(int j=i+n-1; j>0; j--){
            
            if(j>n){
                cout<<" ";
            }
            else{
                cout<<print<<" ";
                print++;
            }

        }

        cout<<endl;
    }
    

    return 0;

}