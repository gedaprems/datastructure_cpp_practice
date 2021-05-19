#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    char a[n+1];
    cin>>a;
    cout<<a<<"\n";

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    int i=0;
    while(a[i]!='\0')
    {
        cout<<a[i]<<endl;
        i++;
    }
    return 0;
}