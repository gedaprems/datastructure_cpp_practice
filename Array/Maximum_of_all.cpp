#include <iostream>
#include <climits>
using namespace std;

int main(){

    int n,maxno= INT_MIN;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){

        arr[i]= max(arr[i],maxno);
        maxno= arr[i];

        // if(arr[i]>max){
        //     max=arr[i];
        // }
        // else if(arr[i]<max){
        //     arr[i]=max;
        // }

    }

    for (int j = 0; j < n; j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    

    return 0;
}