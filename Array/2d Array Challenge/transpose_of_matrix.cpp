#include <bits/stdc++.h>
using namespace std;

// void swap(int arr[][], int n){
//     int temp=0;

//     for(int i=0; i<n; i++){
//         for(int j=i; j<n; j++){
//             int temp = arr[i][j];
//             arr[i][j]= arr[j][i];
//             arr[j][i]= temp;            
//         }
//     }
// }

int main(){

    int n;
    cin>>n;

    int arr[n][n];

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n; j++){
            cin>>arr[i][j];
        }
    }

    // swap(arr,n);
    int temp=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int temp = arr[i][j];
            arr[i][j]= arr[j][i];
            arr[j][i]= temp;            
        }
    }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}