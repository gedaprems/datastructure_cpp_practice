#include <iostream>
using namespace std;

void find_substring(string str, string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch = str[0];
    int code = ch;
    string check = str.substr(1);

    find_substring(check , ans);
    find_substring(check, ans+ch);
    find_substring(check, ans+ to_string(code));
}

int main(){

    find_substring("AB","");

    return 0;
}