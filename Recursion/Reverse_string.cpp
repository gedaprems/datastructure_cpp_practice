#include <iostream>
using namespace std;

void reverse(string s){

    if(s.length()==0){
        return;
    }

    string crop_str = s.substr(1);
    reverse(crop_str);
    cout<<s[0];

}

int main(){

    reverse("Hello");
    cout<<endl;

    return 0;
}