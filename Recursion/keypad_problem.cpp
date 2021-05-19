#include <iostream>
using namespace std;

string keyPad[] = {"", "", "abc", "def","ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad_fun(string str, string ans){

    if( str.length()==0){

        cout<<ans<<endl;
        return;
    }

    char ch= str[0];
    string code = keyPad[ch-'0'];
    string remain = str.substr(1);

    for(int i=0; i<code.length(); i++){
        keypad_fun(remain, ans + code[i]);
    }
}

int main(){

    string s;
    cin>>s;

    keypad_fun(s,"");

    return 0;
}