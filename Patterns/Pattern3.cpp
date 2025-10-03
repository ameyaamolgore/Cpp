#include<iostream>
using namespace std;

int main(){
    int num, row, col;
    num=5;

    for(row=1; row<=5; row=row+1){
        for(col=1; col<=5; col=col+1){
            cout<<num;
            num=num-1;
        }
        num=5;
        cout<<endl;
    }
}