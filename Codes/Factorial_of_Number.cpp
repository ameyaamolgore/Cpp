#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    for(int i=(num-1); i>0; i=i-1){
        num=num*i;
    }
    cout<<num;
}