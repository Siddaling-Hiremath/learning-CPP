#include <iostream>
using namespace std;

int main()
{

    int pow=1,rem,bi=0,temp;

    cout<<"Enter your number:";
    cin>>temp;
    int num=temp;
    while (temp>0)
    {
        rem=temp % 2;
        temp/=2;
        bi+=(pow*rem);
        pow=(pow*10);
    }

    cout<<"The binary number of "<<num<<" is : "<<bi<<endl;

    return 0;
}