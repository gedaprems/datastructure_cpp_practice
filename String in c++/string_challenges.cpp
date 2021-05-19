#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    string str = "abcdefghij";

    // convert to upper case

    for(int i=0; i<str.length(); i++){
        if(str[i]>='a' && str[i]<='z'){
             str[i] = str[i]-32;
        }
    }

    cout<<str<<endl;

    // convert to lower case

    for(int i=0 ; i<str.length(); i++){
        if(str[i]>='A' && str[i]<='Z'){
             str[i] = str[i]+32;
        }
    }
    cout<<str<<endl;

    // ******************************************************** //

    // using built in function to upper

    transform(str.begin(), str.end(), str.begin(), ::toupper);

    cout<<str<<endl;

    // using built in function to upper
    
    transform(str.begin(),str.end(),str.begin(), ::tolower);
    cout<<str<<endl;

    return 0;
}