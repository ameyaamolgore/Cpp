#include<iostream>
using namespace std;

int main(){
    
    int i=1;
    int num;
    cin>>num;

    while(num%i==0){
        cout<<i<<endl;
        i=i+1;
    }
}