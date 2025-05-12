#include<iostream>
using namespace std;

int main(){
    int num, row, col;
    cin>>num;

    for(row=1; row<=num; row=row+1){

        for(col=1; col<row; col=col+1){
            cout<<" ";
        }

        for(col=((num-row+1)*2)-1; col>=1; col=col-1){
            cout<<'*';
        }

        cout<<endl;
    }
}
