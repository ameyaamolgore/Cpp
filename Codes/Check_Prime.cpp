#include<iostream>
using namespace std;

int main(){
    int num; 
    cin>>num;

    for(int i=2; i<=num; i=i+1){
        if((num%i)==0){
           cout<<"Number is not prime"; 
           return 0;
        }
        else{
            cout<<"Number is prime";
            return 0;
        }
    }
}