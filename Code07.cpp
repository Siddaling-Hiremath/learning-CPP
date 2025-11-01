#include <iostream>
using namespace std;

int function1(int age);

int main(){

char Ans;
do{ 
    int Age;

    cout<<"what is your age: ";
    cin>>Age;
    cout<<"your are born in "<<function1(Age)<<endl;
    cout<<"so you want to contitue :\n"<<"pass Y/N\n";
    cin>>Ans;
} while(Ans=='Y'||Ans=='y');

if(Ans=='N'||Ans=='n'){
    cout<<"Thank you\n";
}

    return 0;
}


int function1(int age){

    int total,year=2025;
    total=year-age;
    return total;

}