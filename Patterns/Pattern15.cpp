#include <iostream>
using namespace std;

int main(){
    char name='A';
    int row, col;

    for(row=1; row<=5; row=row+1){
        for(col=1; col<=5-(row-1); col=col+1){
            cout<<name;
            name=name+1;
        }
        name='A';
        cout<<endl;
    }
}