#include<iostream>
using namespace std;

int main(){
    char name='a';
    int row, col;

    for(row=1; row<=5; row=row+1){
        for(col=1; col<=5; col=col+1){
            cout<<name;
        }
        name=name+1;
        cout<<endl;
    }
}