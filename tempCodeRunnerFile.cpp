#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char str1[25];
    int a =0;

    cin>>str1;

    int length=strlen(str1);
    
    for(int i=0;i<length/2;i++){
        if(str1[i]!=str1[length-1-i]){
           
            a=1;
            break;
        }
    }

    if (a==0){
        cout<<"its palindrome";
    }else {
        cout<<"its not palindrome";
    }


    return 0;
}