#include <iostream>
using namespace std;

int MaxOfThree(int a, int b, int c);

int main(){
    int a,b,c;
    cout<<"Enter three numbers: \n";
    cin>>a>>b>>c;
    cout<<"Bigest number is: "<<MaxOfThree(a,b,c);
    return 0;
}

int MaxOfThree(int a, int b, int c){
    if(a<b && c<b){
        return b;
    } else if(b<c && a<c) {
        return c;
    } else {
        return a;
    }
}