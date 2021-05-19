/*
1
01
101
0101
10101
*/

#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=i; j>0; j--){
            if(j%2==0){
                cout<<j%2;
            }
            else{
                cout<<j%2;
            }

        }
        cout<<endl;
    }

    return 0;
}