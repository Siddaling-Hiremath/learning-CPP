#include <iostream>
using namespace std;

int main(){
    int rem,pow=1,dig,ans=0;

    cout<<"Enter your binary number: ";
    cin>>rem;
    int trem=rem;
    while(trem>0){
        if(trem%10>1){
            cout<<"please enter valid the binary number";
            return 1;
        }
        trem/=10;
    }

    while(rem>0){
    dig=rem%10;
    ans+=(dig*pow);
    rem=rem/10;
    pow=pow*2;
    }
    cout<<"The decimal number is :"<<ans<<endl;

    return 0;
}