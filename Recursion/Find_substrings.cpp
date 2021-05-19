#include <iostream>
using namespace std;

void find_sub(string str, string ans){

    if(str.length()==0){
        cout<<ans<<endl;
        return ;
    }
    char ch = str[0];
    string check = str.substr(1);

    find_sub(check,ans);
    find_sub(check,ans+ch);
}

int main(){

    find_sub("ABC","");

    return 0;
}