#include<iostream>
using namespace std;

int main(){
    
    cout<<"Enter the number to find";
    int n;
    cin>>n;
    int arr[]= {1,2,3,4,5,6};

    for(int i=1; i<6; i++){
        if(n==arr[i]){
            cout<<i;
        }
    }
    return -1;
}
