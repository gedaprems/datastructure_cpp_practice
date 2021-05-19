#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int x){

    int s =0;
    int e =size-1;

    while (s<=e)
    {
        int mid = (e+s)/2;

        if(arr[mid]==x){
            return mid;
        }
        else if (arr[mid]<x)
        {
            s = mid+1;
        }
        else{
            e = mid-1;
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
    int key;
    cin>>key;

    cout<<"The index of "<<key<<" is "<<binarySearch(arr,n,key)<<endl;

    return 0;
}