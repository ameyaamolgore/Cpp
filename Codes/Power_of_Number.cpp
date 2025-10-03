#include<iostream>
using namespace std;

int main(){
    int num, power;
    cin>>num>>power;
    int n=num;

    for(int i=1; i<power; i=i+1){
        num=n*num;
    }

    cout<<num;
    
    
}