#include<iostream>
using namespace std;

int main(){
    int k, n, w, borrow, sum;
    cin>>k>>n>>w;
    //k=first banan cost, n=dollar he has, w=banana he wants.

    //running the ap sum formula
    sum=k*w*(w+1)/2;
    borrow=sum-n;
    if(borrow<0){
        borrow=0;
    }
    cout<<borrow;
}