#include <iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    int n_s =1, m_s=1;


    for(int i=1; i<=n; i++){

        n_s= n_s*i;
    }

    for(int i=1; i<=m; i++){

        m_s= m_s*i;
    }

    cout<<" Factorial of "<<n<<" is "<<n_s<<endl;
    cout<<" Factorial of "<<m<<" is "<<m_s<<endl;


    return 0;


}