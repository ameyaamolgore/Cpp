#include<iostream>
using namespace std;

int main(){
    int n, sum;
    cin>>n; //number of drinks
    sum=0;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<(sum*1.0)/n; //percent output in decimals
}