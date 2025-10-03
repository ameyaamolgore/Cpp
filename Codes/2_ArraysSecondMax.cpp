#include<iostream>
using namespace std;

//for finding the second largest element in the array   

int main(){
    int arr[7] = {2, 6, 4, 3, 8, 5, 1};
    int max, smax;
    max=smax=arr[0];

    for(int i=0; i<=6; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
    cout<<endl;

    //found out max

    // for taking the size of array, take sizeof(arr)

    for(int i=0; i<=6; i++){
        if(arr[i]>smax && arr[i]<max){
            smax=arr[i];
        }
    }
    cout<<smax; 
    //for finding second largest element in the array
}