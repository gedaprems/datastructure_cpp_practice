#include <bits/stdc++.h>
// #define endn "\n"
// #define sin(a) scanf("%d", &a);
using namespace std;

int main(){

    // int a,b,c;
    // cin>>a>>b>>c;
    // sin(a);
    // sin(b);
    // sin(c);

    // int arra[a][b], arrb[b][c];
    // for(int i=0; i<a; i++){
    //     for(int j=0; j<b; j++){
    //         cin>>
    //     }
    // }

    int a[3][4] = { {1,2,3,4}, {5,6,7,8}, {2,4,5,6}};
    int b[4][3] = { {1,2,3},{3,5,5},{5,6,7},{3,4,6}};
    int c[3][3] ;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int temp=0;
            for(int k=0; k<4; k++){

                temp += a[i][k] * b[k][j]; 

            }
            c[i][j] = temp;
        }
    }

    for(int i=0; i<3 ; i++){
        for(int j=0; j<3 ; j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;

}