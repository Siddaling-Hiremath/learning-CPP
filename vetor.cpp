#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int>arr1;
    vector<int>arr2={1,2,3,4};
    vector<int>arr3(3,0);

    arr1.push_back(2);
    arr1.push_back(1);
    arr1.push_back(3);

    cout<<"\nvector 1 :"<<endl;
    for(int i:arr1){
        cout<<i<<endl;
    }
    
    cout<<"\nvector 2 :"<<endl;
    for(int i:arr2){
        cout<<i<<endl;
    }
    
    cout<<"\nvector 3 :"<<endl;
    for(int i:arr3){
        cout<<i<<endl;
    }

    cout<<"\nvetor 1:size ="<<arr1.size()<<endl;
    cout<<"vetor 2:size ="<<arr2.size()<<endl;
    cout<<"vetor 3:size ="<<arr3.size()<<endl<<endl;
    cout<<"vetor 1:Capacity ="<<arr1.capacity()<<endl;
    cout<<"vetor 2:Capacity ="<<arr2.capacity()<<endl;
    cout<<"vetor 3:Capacity ="<<arr3.capacity()<<endl;


    return 0;
}