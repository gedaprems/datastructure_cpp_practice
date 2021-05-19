#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }

    int maxno=INT_MIN, sum;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            sum=0;
            for(int k=i; k<=j; k++){
                sum=sum+arr[k];
                maxno = max(sum, maxno);
            }
            cout<<sum<<endl;
        }
    }

    cout<<" Max is : "<<maxno<<endl;

    return 0;
}