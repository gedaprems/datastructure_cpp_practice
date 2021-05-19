// output: 
// 1
// 23
// 456
// 78910


#include <iostream>
using namespace std;

int main(){

    int n,sum=0;
    cin>>n;


    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            sum=sum+1;
            cout<<sum;
            

        }
        cout<<endl;
        
    }
    


    return 0;

}