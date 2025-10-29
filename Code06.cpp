#include <iostream>
using namespace std;

int isprime(int num);

int main() {

    int num;

    cout<<"Enter your number:";
    cin>>num;
    cout<<"prime numbers from 1 to "<<num<<" are:\n";
    for(int i=2;i<=num;i++){
     if(isprime(i)){
        cout<<i<<" ";
    }
    }

    return 0;
}


int isprime(int num){
   
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
          return false;
        }
    }
    return true;
}