#include <iostream>
#include <climits>
using namespace std;

int main(){

    int n, max_val= INT_MIN, min_val = INT_MAX;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        max_val = max(max_val, arr[i]);
        min_val = min(min_val, arr[i]);
    }

    cout<<max_val<<" "<<min_val<<endl;

    return 0;
}