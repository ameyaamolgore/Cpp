#include<iostream>
using namespace std;

int main(){
    int num, row, col, n;
    cin>>num;
    n=1;

    for(row=1; row<=num; row=row+1){

        for(col=1; col<=num-row; col=col+1){
            cout<<" ";
        }
        
        for(col=1; col<=row; col=col+1){
            cout<<n;
            n=n+1;
        }

        n=1;

        for(col=row-1; col>=1; col=col-1){
            cout<<col;
        }
        
        cout<<endl;

    }
}