#include <iostream>
using namespace std;

void tower_of_h(int n, char src, char dest, char helper){
    
    if(n==0){
        return; //base statement
    }

    tower_of_h(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    tower_of_h(n-1,helper,dest,src);

}

int main(){

    tower_of_h(4,'A', 'C', 'B');

    return 0;
}