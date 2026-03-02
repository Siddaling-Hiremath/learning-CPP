#include <iostream>
using namespace std;

int pow(int x,int y);

int main(){
    int a,b;

    cout<<"Enter a value: "<<endl;
    cin>>a;
    
    cout<<"Enter b value: "<<endl;
    cin>>b;

    cout<<"a^b: "<<pow(a,b);


    return 0;
}

int pow(int x,int y){
  for(int i=0;i<y;i++){
    x*=y;
  }
    return x;

}