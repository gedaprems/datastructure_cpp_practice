/*
k=32

arr=2,3,4, 11 , 23 , 12 , 34 

find sum of array element exactly 32

*/

#include <bits/stdc++.h>
using namespace std;


// Brute Force approach
/*
bool pairsum(int arr[], int n, int k){

    int sum=0;
    for(int i=0; i<n-1; i++){
        for(int j=1; j<n; j++){
            sum = arr[i]+arr[j];
            if(sum==k){
                cout<<i<<" "<<j<<endl;
                return true;
            }

        }
    }

    return false;
}
*/

//Optimization Approach
bool pairsum(int arr[], int n, int k){

    int low=0, high = n;

    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k){
            --high;
        }
        else{
            ++low;
        }
    }

    return false;
}

//main body

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){

        cin>>arr[i];
    }
    int k; 
    cin>>k;

    cout<<pairsum(arr, n, k)<<endl;
    return 0;
}
