#include<iostream>
using namespace std;

int main(){
    int n, k, count;
    cin>>n>>k;
    count=0;
    int arr[n];

    for(int i=0; i<n; i++){ //array input
        cin>>arr[i];

        
    }

    for(int i=0; i<n; i++){
        if(arr[i]>=arr[k-1] && arr[i]>0){
            count++;
        }
    }

    cout<<count;

}