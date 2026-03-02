#include <iostream>
using namespace std;

int fact(int x);

int main(){
    
    int n;

    cout<<"For factorial enter your number: "<<endl;
    cin>>n;
    if(n<1){
        cout<<"Your number is not valid: "<<endl;
        return 1;
    }
     
    cout<<"Your factorial is : "<<fact(n);


    return 0;
}

int fact(int x){
    if(x<1){
        return 1;
    }

    return x*fact(x-1);
}