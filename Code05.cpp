#include <iostream>
using namespace std;

bool isprime(int num);

int main(){
int num;

cin>>num;
if(isprime(num)){
    cout<<num<<" your number is prime\n";
} else{
     cout<<num<<" your number is not prime\n";
}

return 0;
}

bool isprime(int num) {
    if (num <= 1)
        return false;

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}