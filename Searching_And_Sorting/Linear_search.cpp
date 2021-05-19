#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int n){

    for(int i=0; i<size; i++){
        if(arr[i]==n){
            return i;
        }
    }
    return -1;
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int x;
    cin>>x;

    cout<<"Index of "<<x<<" is "<<LinearSearch(arr,n,x)<<endl;
    cout<<arr[12]<<endl;

    return 0;
}