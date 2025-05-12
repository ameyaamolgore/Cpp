#include<iostream>
using namespace std;

int main(){
    int num, row, col;
    num=1;
    
    for(row=1; row<=5; row=row+1){
        for(col=row; col>=1; col=col-1){
            cout<<col;
        }
        cout<<endl;
    }
}