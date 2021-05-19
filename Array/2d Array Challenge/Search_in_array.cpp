// IMPORTANT QUE

#include <bits/stdc++.h>
using namespace std;



int main(){

    int row,col,findx;
    bool found=false;
    cin>>row>>col;
    int arr[row][col];
    for(int i=0; i<row; i++){
        for(int j=0 ; j<col; j++){
            cin>>arr[i][j];
        }
    }
    cin>>findx;

    int r=0, c=col-1;
    while(r<row && c>=0 ){
        if(arr[r][c]==findx){
            found=true;
            break;
        }
        if(arr[r][c]<findx){
            r++;
        }
        if(arr[r][c]>findx){
            c--;
        }
    }

    if(found){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Element is not found"<<endl;
    }

    return 0;
}

// 4 4
// 1 4 7 11
// 2 5 8 12
// 3 6 9 16
// 10 13 14 17
// 5