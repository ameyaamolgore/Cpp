#include<iostream>
using namespace std;

// for finding the min element in the array.

int main(){
    int ans;
    int arr[5] = {4, 6, 11, 2, 8};
    ans=arr[0];
    for(int i=1; i<=4; i++){
        
        if(arr[i]<ans){
            ans=arr[i];
        }
    }
    cout<<ans;
}