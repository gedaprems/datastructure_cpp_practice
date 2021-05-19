#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int row_min=0, row_max= n-1, col_min=0 , col_max=m-1;

    while(row_min<=row_max && col_min<=col_max){

        //Row min 

        for(int row=col_min ; row<=col_max ; row++){
            cout<<arr[row_min][row]<<" ";
        }
        row_min++;

        // Col max

        for(int col=row_min; col<=row_max; col++){
            cout<<arr[col][col_max]<<" ";
        }
        col_max--;

        //Row max

        for(int row=col_max; row>=col_min; row --){
            cout<<arr[row_max][row]<<" ";
        }
        row_max--;

        //Col min 

        for (int col = row_max; col >=row_min; col--)
        {
            cout<<arr[col][col_min]<<" ";
        }
        col_min++;

    }

    return 0;
}