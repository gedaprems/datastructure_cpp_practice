//  -1 2 3 4 5 
//  -1 1 4 8 13 
//  Max is 14..
//  Maximun Subarray Sum

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;    
    int cummsum[n+1];
    cummsum[0]=0;
    int arr[n];

    // combine the for loop of cummulative sum with array intake
    for(int i=0; i<n ;i++){
        cin>>arr[i];
        cummsum[i+1]=cummsum[i]+arr[i];
    }
    

    // for(int i=1; i<=n; i++){        
    //     cummsum[i]=cummsum[i-1]+arr[i-1];
    // }

    int maxsum=INT_MIN;
    for(int i=1; i<=n; i++){
        int sum=0;
        for(int j=0; j<i; j++){
            sum=cummsum[i]-cummsum[j];
            maxsum = max(maxsum, sum);
        }
    }

    cout<<maxsum<<endl;
    return 0;
}