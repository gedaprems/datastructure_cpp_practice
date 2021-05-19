/*
0
1
1
2
3
5
8
13
21
34
*/


#include <iostream>
using namespace std;

void fibo(int a){

    int t1=0,t2=1,nextterm;

    while(a!=0){
        cout<<t1<<endl;
        nextterm= t1 + t2;
        t1=t2;
        t2=nextterm;
        --a;
    }
}

int main(){
    int n;
    cin>>n;

    fibo(n);
    return 0;
}