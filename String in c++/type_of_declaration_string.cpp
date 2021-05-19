#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){

    // string str1(5, 'n');
    // cout<<str1<<endl;

    // string str;
    // getline(cin, str);// Get value with spaces
    // cout<<str<<endl;

    //************************************************************


    // string str1="fam";
    // string str2="ily";

    // // str1.append(str2);
    // str1 = str1 + str2;
    // // cout<<str1+str2<<endl;
    // cout<<str1<<endl;

    // accessing the characters in string

    // cout<<str1[1]<<endl; // must print a

    //************************************************************


    // string abc = "hello this is ramanujam worlds best mathematician";
    // // cout<<abc<<endl;
    // abc.clear();

    // cout<<abc<<endl;

    //************************************************************

    // string a="abc";
    // string b ="abc";

    // if(b.compare(a)==0){
    //     cout<<"Strings are equal\n";
    // }
    // cout<<b.compare(a)<<"\n";

    //************************************************************

    // string str = "prem";
    // cout<<str<<endl;

    // str.clear();

    // if(str.empty()){
    //     cout<<"String is empty\n";
    // }

    //************************************************************

    // Erase function>>>>>>>>>>>>

    // string str = "nincompoop";
    // str.erase(3,3); // erase com
    // cout<<str<<endl;

    //************************************************************

    // Find function>>>>>>>>>>>>

    // string str = "nincompoop";
    // cout<<str.find("com")<<"\n"; // return the index where the substring starts

    //************************************************************

    // Insert function>>>>>>>>>>>

    // string str = "nincompoop";

    // str.insert(2, "lol");
    // cout<<str<<endl;

    //************************************************************

    // Size or length of string>>>>

    // string str = "nincompoop";

    // cout<<str.size()<<endl;
    // cout<<str.length()<<endl;// work same

    // for(int i=0 ; i<str.length(); i++){

    //     cout<<str[i]<<endl;
    // }

    //************************************************************
    // Print substring>>>>>>>>>>>>>>
    // string str = "nincompoop";

    // string s = str.substr(6, 4);
    // cout<<s<<endl;

    //************************************************************
    // String to Int function

    // string str = "1234";
    // int x = stoi(str);
    // cout<<x<<" "<<x+4<<endl; // add 2 to 786

    //************************************************************
    // to_string function

    // int x = 786;
    // cout<<to_string(x)+"2"<<endl; // append 2 to 786

    //************************************************************
    // sort the character in the string 

    string str = "sldfjdjfsfdfdjflk";

    sort(str.begin(), str.end());
    cout<<str<<endl;

    return 0;
}