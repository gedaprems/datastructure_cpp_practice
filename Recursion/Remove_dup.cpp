#include <iostream>
using namespace std;

string remove_dup(string src){

    if(src.length()==0){
        return "";
    }

    char ch = src[0];
    string ans = remove_dup(src.substr(1));

    if(ch==ans[0]){
        return ans;
    }

    return ch+ans;
}

int main(){

    string str;
    cin>>str;

    cout<<remove_dup(str)<<endl;

    return 0;
}