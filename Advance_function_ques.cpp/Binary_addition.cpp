#include <bits/stdc++.h>
using namespace std;

int reverse(int n){
    int ans=0;
    while (n>0)
    {
        ans = ans*10 + n%10;
        n = n/10;
    }
    return ans;
    
}

int add_binary(int num1, int num2){

    
    int ans=0, carry=0;

    while(num1!=0 && num2!=0){
        
        int lastdig = num1%10 + num2%10 + carry;
        num1 = num1/10;
        num2 = num2/10;
        if(lastdig==1 || lastdig==0){
            
            ans = ans*10 + lastdig;
            carry=0;
        }
        else if(lastdig==3 )
        {
            ans = ans*10 + 1;
            carry=1;
            
        }
        else if(lastdig==2)
        {
            ans = ans*10 + 0;
            carry=1;
        }
        else{
            ans = ans*10 + 0;
            carry=1;
        }

    }


    return reverse(ans);
}

int main(){

    int n,m;
    cin>>n>>m;

    cout<<add_binary(n,m)<<endl;

    return 0;
}