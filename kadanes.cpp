#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main(){
    int mxs=INT_MIN,n=5,cs=0;

    
    int arr[6]={1,2,-5,7,6};
 
    for(int i=0;i<n;i++){
        cs+=arr[i];
        mxs=max(cs,mxs);

        if(cs<0){
            cs=0;
        }
    }

    
    cout<<"maximum sum of subarray= "<<mxs;

    return 0;
}