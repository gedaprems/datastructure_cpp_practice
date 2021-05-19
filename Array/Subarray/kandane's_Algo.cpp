/* 
arr -1 4 -6 7 -4
cur -1 4 -2 7  3
     0    0     

final ans 3..
*/

#include <bits/stdc++.h>
using namespace std;

/*
//Function for kandane's Algorithm to find the maximun sum of subarray
int kandanes(int arr[], int n){
    int currsum = 0, maxsum = INT_MIN;

    for(int i=0; i<n; i++){

        currsum+= arr[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum= max(maxsum, currsum);
    }
    return maxsum;
}

*/

int main(){

    int n;
    cin >> n;
    int arr[n];
    int currsum=0;
    int maxsum= INT_MIN;
    for(int i=0 ; i<n; i++){
        cin>>arr[i];
        currsum=currsum+arr[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum=max(maxsum, currsum);
    }

    cout<<maxsum<<endl;


    return 0;
}