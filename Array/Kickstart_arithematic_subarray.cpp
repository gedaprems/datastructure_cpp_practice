// Maximun length of arithmetic subarray in a given array
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int ans=2,curr=2,dif=arr[1]-arr[0],j=2;

    while (j<n)
    {

        if(arr[j]-arr[j-1]==dif){
            curr++;
            ans = max(curr,ans);
        }
        else{
            dif=arr[j]-arr[j-1];
            curr=2;
        }
        j++;
    }

    cout<<ans<<endl;
    
    


    return 0;
}