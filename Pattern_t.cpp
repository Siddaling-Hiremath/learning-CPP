#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter your number:";
    cin>>n;
    for(int i=0;i<n;i++){
        char cha='A';
        for(int j=0;j<i+1;j++){
            cout<<cha<<" ";
            cha++;

        }
        cout<<endl;
    }

    return 0;
}