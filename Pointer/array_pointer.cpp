#include <bits/stdc++.h>
using namespace std;

int main(){


    int arr[] = { 1,3,4};
    cout<<*arr<<endl;
    int *ptr = arr;

    for(int i=0 ; i<3; i++){
        // cout<<*ptr<<" ";
        cout<<*(arr+i)<<" ";

        // ptr++;
    }

    return 0;
}