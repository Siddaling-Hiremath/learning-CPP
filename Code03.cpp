#include <iostream>
using namespace std;

void odd_even(int num);

int main(){
    int a;
    cout<<"Enter one nume: \n";
    cin>>a;
    odd_even(a);

    return 0;
}

void odd_even(int num){
    if (num%2==0){
        cout<<"your number is even\n";
    } else {
        cout<<"Your number is odd\n";
    }
}