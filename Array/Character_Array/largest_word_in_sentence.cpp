#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    cin.ignore();

    char str[n+1];
    cin.getline(str,n);
    cin.ignore();

    int i=0,currlen=0, ans=0;
    int st=0, maxst=0;

    while(1){

        if(str[i]==' ' || str[i]=='\0')
        {
            if(currlen > ans){
                ans=currlen;
                maxst = st;
            }
            currlen = 0;    
            st=i+1;
                    
        }
        else
            currlen++;

        if(str[i]=='\0'){
            break;
        }
        i++;
    }

    cout<<"max length "<<ans<<"\n";
    for(int i=0; i<ans; i++){
        cout<<str[i+maxst];
    }
    cout<<"\n";

    return 0;
}