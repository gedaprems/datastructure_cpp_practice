/*

case 1 : -1 4 -6 7 5 -4 (Non Wrapping)
                 ___

case 2 :  4 -4 6 -6 10 -11 12 (Wrapping)
          ____________     ___

*/
#include <bits/stdc++.h>
using namespace std;

int kadanes(int arr[], int n){

    int currsum =0;
    int maxSum = INT_MIN;
    for (int i=0; i<n; i++){
        currsum += arr[i];
        if(currsum < 0){
            currsum =0;
        }
        maxSum = max(currsum, maxSum);
    }
    return maxSum;
}


int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int wrapsum;
    int nonwrapsum = kadanes(arr,n);
    int totalsum=0;

    // Maximum Circular Subarray

    for(int i=0; i<n ; i++){
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }

    wrapsum = totalsum + kadanes ( arr, n);

    cout<<max(wrapsum, nonwrapsum)<<endl;

    return 0;
}
