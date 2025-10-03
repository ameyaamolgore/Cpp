#include<iostream>
using namespace std;

int main(){
    int n, count;
    cin>>n;
    count=0;
    int arr[n];
    //int rev=arr[0];

    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]!=arr[i-1]){
            count++;
        }
    }
    cout<<count;

}