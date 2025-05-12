#include<iostream>
using namespace std;

int main(){
    int num, row, col;
    cin>>num;

    for(row=1; row<=num; row=row+1){
        
        for(col=1; col<=row; col=col+1){
            cout<<'*';
        }

        for(col=2*num-2*row; col>=1; col=col-1){
            cout<<" ";
        }

        for(col=1; col<=row; col=col+1){
            cout<<'*';
        }
        cout<<endl;
    }

    for(row=num-1; row>=1; row=row-1){
        
        for(col=1; col<=row; col=col+1){
            cout<<'*';
        }

        for(col=2*num-2*row; col>=1; col=col-1){
            cout<<" ";
        }

        for(col=1; col<=row; col=col+1){
            cout<<'*';
        }
        cout<<endl;
    }
}