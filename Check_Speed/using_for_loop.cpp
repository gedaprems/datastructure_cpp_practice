#include <iostream>
using namespace std;

int main(){

    int x,ans=1;
    cin>>x;

    while(x>0){
        ans = ans * x;
        x--;
    }

    cout<<ans;

    return 0;
}