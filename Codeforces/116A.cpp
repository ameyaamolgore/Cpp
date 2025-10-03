#include<iostream>
using namespace std;

int main(){
    int n, exit, enter, capacity, current;
    cin>>n;
    current=capacity=0; //before the tram starts

    if(n>=2 && n<=1000){
        for(int i=0; i<n; i++){
            cin>>exit>>enter; 

            current=current-exit+enter;

            if(current>capacity){
                capacity=current; 
            }
        }
        cout<<capacity;
 
    }
}