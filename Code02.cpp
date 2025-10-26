#include<iostream>
using namespace std;

int main(){
    int num[5],sum=0;

    for(int i=0;i<5;i++){
        cin>>num[i];
    }

    for(int i=0;i<5;i++){
        sum+=num[i];
    }

    cout<<"your sum is "<<sum;


    return 0;
}