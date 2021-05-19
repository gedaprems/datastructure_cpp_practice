#include <bits/stdc++.h>
using namespace std;

int main(){

    int a=10; // it is store in memory stack
    int *p = new int(); // it is also store in memory stack but it is heap

    *p = 10; // now this is store in memory heap
    cout<<*p<<endl;

    delete(p); // this delete the memory allocated in heap for point p. 

    cout<<*p<<endl;

    // the above operation give birth to.... "daglling pointer" ...

    // where p points to address in heap but at that address no data is present
    // to avoid it we should again allocate value to p i.e using the address 

    p = new int[4]; // this allocate 4 memeory in heap memory 
    

    delete[]p; // this delete the memory in heap for array


    p = NULL; // this destroy the p 

    return 0;

}