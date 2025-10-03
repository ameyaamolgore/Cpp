#include<iostream>
using namespace std;

int main(){
    int last=0;

    int prev=1;
    int current; 
    cin>>current;
    for(int i=1; i<=current; i=i+1){
        current=prev+last;
        current=prev;
        prev=last;
        prev=prev+1;
        last=last+1;
    }
    cout<<current;
}