#include<iostream>
using namespace std;

int count(int n){
    int count=0;

    while(n>=5){

        count+=n/5;
        n/=5;
    }
    return count;
}

int main(){

    int num;
    cin>>num;

    cout<<count(num);
}