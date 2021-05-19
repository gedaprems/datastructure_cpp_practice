#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int temp,indexi,indexj;

    for(int i=0; i<n; i++){
        temp=0,indexi=0,indexj=0;
        

        for(int j=i; j<n; j++){
            temp=temp+arr[j];
            cout<<temp<<"( index "<<i<<" "<<j<<")"<<endl;
        }
    }

    cout<<endl;

    return 0;
}